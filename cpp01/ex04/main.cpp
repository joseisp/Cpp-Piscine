/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:08:40 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/01 20:16:31 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "man.hpp"

void	searchError (int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Please check the arguments. ./sed (file),"
		<< " (oldWord), (newWord)" << std::endl;
		exit (1);
	}
	int arrayN = 2;
	for (int i = 0; argv[arrayN][i]; i++)
	{
		if (!(argv[arrayN][i] > 0 && argv[arrayN][i] < 127))
		{
			std::cout << "just ascii character" << std::endl;
			exit (0);
		}
		if (!(argv[arrayN][i + 1]))
		{
			arrayN++;
			i = 0;
		}
	}
}

int main (int argc, char *argv[])
{
	std::ifstream file(argv[1]);
	if (!file)
	{
		std::cout << "Error. check the file to open." << std::endl;
		exit (0);
	}
	std::string copy = argv[1];
	std::ofstream ofs (copy + ".replace");
	if (!ofs)
	{
		std::cout << "Error. check the file out." << std::endl;
		exit (0);
	}
	searchError(argc, argv);
	int i = 0;
	int len = 0;
	int lenNew = 0;
	std::string line;
	std::string nameKey = argv[2];
	std::string	newName = argv[3];
	std::string	newText;
	len = nameKey.length();
	lenNew = newName.length();
	while(std::getline(file, line))
	{
		std::string aux;
		size_t pos = line.find(nameKey);
		while(pos != std::string::npos)
		{
			aux.append(line.substr(0, pos));
			line.erase(0, pos + len);
			aux.append(newName);
			pos = line.find(nameKey);
		}
		aux.append(line);
		ofs << aux << std::endl;
	}
	file.close();
	ofs.close();
	return 0;
}

