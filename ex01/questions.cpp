/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   questions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:27:19 by jinacio-          #+#    #+#             */
/*   Updated: 2022/10/04 21:57:05 by jinacio-         ###   ########.fr       */
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
        if (honeyBook->contact[n2 + 1].timeNumber < honeyBook->contact[n1].timeNumber) 
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
    int i = 0;
    while (i < dSecret.length())
    {
        if (!((dSecret[i] >= 0 && dSecret[i] <= 127)))
        {
            std::cout << "Please, insert only ascii caracters" << std::endl;
            return ;
        }
        i++;
    }
    honeyBook->contact[numberCount].setDarkestSecret(dSecret);
    honeyBook->contact[numberCount].timeNumber++;
}

void questionPhoneN(PhoneBook *honeyBook, int numberCount)
{
    std::string phoneN;
    std::cout << "Insert the phone number: " << std::endl;
    std::cin.clear();
    std::cin.sync();
    std::getline(std::cin, phoneN);
    int i = 0;
    while (i < phoneN.length())
    {
        if (!((phoneN[i] >= 48 && phoneN[i] <= 57) || (phoneN[i] == 32)))
        {
            std::cout << "Please, insert only numbers caracters" << std::endl;
            return ;
        }
        i++;
    }
    honeyBook->contact[numberCount].setPhoneNumber(phoneN);
    questionDSecret(honeyBook, numberCount);
}

void questionNName(PhoneBook *honeyBook, int numberCount)
{
    std::string nName;
    std::cout << "Insert the nick name: " << std::endl;
    std::cin.clear();
    std::cin.sync();
    std::getline(std::cin, nName);
    int i = 0;
    while (i < nName.length())
    {
        if (!((nName[i] >= 0 && nName[i] <= 127)))
        {
            std::cout << "Please, insert only ascii caracters" << std::endl;
            return ;
        }
        i++;
    }
    honeyBook->contact[numberCount].setNickName(nName);
    questionPhoneN(honeyBook, numberCount);
}

void questionLName(PhoneBook *honeyBook, int numberCount)
{
    std::string lName;
    std::cout << "Insert the last name: " << std::endl;
    std::cin.clear();
    std::cin.sync();
    std::getline(std::cin, lName);
    int i = 0;
    while (i < lName.length())
    {
        if (!((lName[i] >= 0 && lName[i] <= 127)))
        {
            std::cout << "Please, insert only ascii caracters" << std::endl;
            return ;
        }
        
        i++;
    }
    honeyBook->contact[numberCount].setLastName(lName);
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
    int i = 0;
    while (i < fName.length())
    {
        if (!((fName[i] >= 0 && fName[i] <= 127)))
        {
            std::cout << "Please, insert only ascii caracters" << std::endl;
            return ;
        }
        i++;
    }
    int numberCount = getNumber( honeyBook);
    honeyBook->contact[numberCount].setFirstName(fName);
    questionLName(honeyBook, numberCount);
}