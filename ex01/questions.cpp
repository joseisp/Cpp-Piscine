/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   questions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:27:19 by jinacio-          #+#    #+#             */
/*   Updated: 2022/09/30 15:59:46 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int getNumber(PhoneBook *honeyBook)
{
    int conts = 0;
    int n1 = 0;
    int n2 = 0;
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

void questionDSecret(PhoneBook *honeyBook, int numberCount)
{
    std::string dSecret;
    std::cout << "Insert the darkest secret: " << std::endl;
    std::cin.clear();
    std::cin.sync();
    std::getline(std::cin, dSecret);
    honeyBook->teste[numberCount].setDarkestSecret(dSecret);
    honeyBook->teste[numberCount].timeNumber++;
}

void questionPhoneN(PhoneBook *honeyBook, int numberCount)
{
    std::string phoneN;
    std::cout << "Insert the phone number: " << std::endl;
    std::cin.clear();
    std::cin.sync();
    std::getline(std::cin, phoneN);
    honeyBook->teste[numberCount].setPhoneNumber(phoneN);
    questionDSecret(honeyBook, numberCount);
}

void questionNName(PhoneBook *honeyBook, int numberCount)
{
    std::string nName;
    std::cout << "Insert the nick name: " << std::endl;
    std::cin.clear();
    std::cin.sync();
    std::getline(std::cin, nName);
    honeyBook->teste[numberCount].setNickName(nName);
    questionPhoneN(honeyBook, numberCount);
}

void questionLName(PhoneBook *honeyBook, int numberCount)
{
    std::string lName;
    std::cout << "Insert the last name: " << std::endl;
    std::cin.clear();
    std::cin.sync();
    std::getline(std::cin, lName);
    honeyBook->teste[numberCount].setLastName(lName);
    questionNName(honeyBook, numberCount);
}


void    questionFName(PhoneBook *honeyBook)
{
    std::string fName;
    std::cout << CLEAR;
    std::cin.clear();
    std::cin.sync();
    std::cout << "Insert the first name: " << std::endl;
    std::getline(std::cin, fName);
    int numberCount = getNumber( honeyBook);
    honeyBook->teste[numberCount].setFirstName(fName);
    questionLName(honeyBook, numberCount);
}