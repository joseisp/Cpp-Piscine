/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   questions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:27:19 by jinacio-          #+#    #+#             */
/*   Updated: 2022/09/29 18:10:12 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int getNumber(PhoneBook *honeyBook)
{
    int conts = 0;
    int n1 = 0;
    int n2 = 0;    //std::cout << "Hello there" << std::endl;
    while(conts < 8)
    {
        if (n1 + 1 == 8) 
            n2 = 0;
        else
            n2 = n1;
        if (honeyBook->teste[n2 + 1].timeNumber < honeyBook->teste[n1].timeNumber) 
            return n2 + 1;
        if ( n1 == 8)
            break;
        n1++;
        conts++;
    }

    return 0;
}

void    questionFName(PhoneBook *honeyBook)
{
    int i = 0;
    std::string fName;
    std::cout << "Insert the name: " << std::endl;
    std::cin >> fName;
    int numbercount = getNumber( honeyBook);
    honeyBook->teste[numbercount].timeNumber++;
    honeyBook->teste[numbercount].setFirstName(fName);
    while(i < 8)
    {
        std::cout << honeyBook->teste[i].getFirstName() << std::endl;
        i++;
    }
}