/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:09:24 by jinacio-          #+#    #+#             */
/*   Updated: 2023/03/22 18:03:38 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include<iomanip>

int main(int argc, char *argv[])
{
	std::map<std::string,std::string>data;
	std::ifstream excelBase;
	std::string ifs;
	std::string pairs;
	std::string odd;

	excelBase.open("data.csv", std::ios::in);
	if (!excelBase)
		std::cout << "Deu ruim!" << std::endl;
	else
		std::cout << "Deu boa!!" << std::endl;

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
		//std::cout << "" << ifs << "\n" ;
	}

	std::map<std::string, std::string>::iterator it = data.begin();
	while (it != data.end())
	{
		std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
		++it;
	}

}
