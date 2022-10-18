/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 22:14:44 by jinacio-          #+#    #+#             */
/*   Updated: 2022/10/11 20:06:12 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>

#define CLEAR "\x1B[2J\x1B[H"

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        std::cout <<  "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    
    for (int i = 1; i < argc; i++)
    {
        for (std::size_t j = 0; j < strlen(argv[i]); j++)
        {
            if (argv[i][j] >= 0 && argv[i][j] < 127)
            {
                char megaphone = toupper(argv[i][j]);
                std::cout << megaphone;
            }
            else
            {
                std::cout << CLEAR;
                std::cout << "Please only ASCII caracter." << std::endl;
                return 0;
            }
        }
    }
    std::cout << "\n";
}