/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:09:24 by jinacio-          #+#    #+#             */
/*   Updated: 2023/05/08 22:07:42 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iomanip>
#include <string.h>
#include <string>

std::string	deleteSpace(std::string src, int frontEnd)
{
	int i = 0;
	int j = 1;
	std::string ret;
	std::string aux;

	if(frontEnd == 1) // end space (Verify if there are spaces).
	{
		while(src[i] != ' ')
		{
			aux = src[i];
			ret.append(aux);
			i++;
		}
	}
	if (frontEnd == 2) // front space (Verify if there are spaces).
	{
		while (src[j] != '\0')
		{
			aux = src[j];
			ret.append(aux);
			j++;
		}
	}

	return ret;
}


std::map<std::string, std::string> creatListMap(std::ifstream & excelBase, char delimiter)
{
	std::map<std::string,std::string>data;
	std::string ifs;
	std::string pairs;
	std::string odd;

	while(!excelBase.eof())
	{
		getline(excelBase, ifs);
		std::stringstream test(ifs);
		int count = 0;
		for (int i = 0; i < 2; i++)
		{
			std::string sub;
			getline(test, sub, delimiter);
			if (i % 2 == 0)
			{
				pairs = sub;
				count += 1;
			}
			else
			{
				odd = sub;
				count += 1;
			}
			if (count == 2)
			{
				data.insert(std::pair<std::string,std::string>(pairs, odd));
				count = 0;
			}
		}
	}
	if (delimiter == ',')
		data.erase("date");
	return data;
}

void openNCheck(std::ifstream & excelBase, std::ifstream & inputBase, char *argv[])
{
	excelBase.open("data.csv", std::ios::in);

	if (excelBase)
		std::cout << "The Excel file opened successfully" << std::endl;
	else
		std::cout << "Error: The Excel file did not open" << std::endl;

	inputBase.open(argv[1], std::ios::in);
	if (inputBase)
		std::cout << "The input file opened successfully" << std::endl;
	else
		std::cout << "Error: The input file did not open." << std::endl;
}

void	printing(std::map<std::string,std::string> & data)
{
	std::map<std::string, std::string>::iterator it = data.begin();
	int i = 0;
	while (it != data.end())
	{
		std::cout << "Key: " << it->first << ", Value: "
				<< it->second << std::endl;
		++it;
	}
}

void	displaying(std::string pairs, std::string odd,
		std::map<std::string,std::string> & data)
{
	std::cout << pairs << "|" << odd << "|" << std::endl;
}

int		subSecurity(std::string securityTest)
{
	int ret = 0;
	int i = 0;
	int j = 0;

	while (securityTest[i] !=  '\0')
	{
		j = i;
		if (securityTest[i] == '|')
		{
			while (securityTest[j] != '\0')
			{
				if ((j - i) > 1 || (securityTest[j]>32 && securityTest[j] <= 126))
					return 10;
				j++;
			}
			return 0;
		}
		i++;
	}
	return 0;
}

void displayCount(std::ifstream & excelBase,
		std::map<std::string,std::string> & data)
{
	std::string ifs;
	std::string pairs;
	std::string odd;
	int numberSecurity = 0;
	while(!excelBase.eof())
	{
		getline(excelBase, ifs);
		std::stringstream test(ifs);
		std::stringstream securityTest(ifs);
		int count = 0;
		std::string sub;
		std::string aux;

		getline(securityTest, aux);
		numberSecurity = subSecurity(aux);
		for (int i = 4; i < 6 && numberSecurity == 10; i++)
		{
			getline(test, sub, '|');
			//std::cout << sub << std::endl;
			if (i % 2 == 0)
			{

				pairs = deleteSpace(sub, 1);
				count += 1;
			}
			else
			{
				odd = deleteSpace(sub, 2);
				count += 1;
			}
		}
		//return ;
		if (numberSecurity == 0)
			std::cout << "Error..." << std::endl;
		else
			displaying(pairs, odd, data);
	}
}

int main(int argc, char *argv[])
{
	std::map<std::string,std::string>data;
	std::ifstream excelBase;
	std::ifstream inputBase;

	openNCheck(excelBase, inputBase, argv);
	data = creatListMap(excelBase, ',');
	displayCount(inputBase, data);

}