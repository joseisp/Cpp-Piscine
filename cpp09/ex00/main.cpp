/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:09:24 by jinacio-          #+#    #+#             */
/*   Updated: 2023/04/23 13:22:22 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iomanip>

std::map<std::string, std::string> creatListMap(std::ifstream & excelBase)
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
			getline(test, sub, ',');
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
	data.erase("date");
	return data;
}

void openNCheck(std::ifstream & excelBase, std::ifstream & inputBase, char *argv[])
{
	excelBase.open("data.csv", std::ios::in);
	if (!excelBase)
		std::cout << "The Excel file opened successfully" << std::endl;
	else
		std::cout << "Error: The Excel file did not open" << std::endl;

	inputBase.open(argv[1], std::ios::in);
	if (!inputBase)
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
		//i++;
		//if (i == 10)
		//	break;
	}
}

// std::map<std::string, std::string>	creatMapInput(std::ifstream & inputBase)
// {

// }

int main(int argc, char *argv[])
{
	std::map<std::string,std::string>data;
	std::map<std::string, std::string>dataInput;
	std::ifstream excelBase;
	std::ifstream inputBase;

	openNCheck(excelBase, inputBase, argv);
	data = creatListMap(excelBase);
	// dataInput = creatMapInput(inputBase);
	printing(data);
	std::cout << data.size() << std::endl;
}
