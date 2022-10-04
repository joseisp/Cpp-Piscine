/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   questions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:27:19 by jinacio-          #+#    #+#             */
/*   Updated: 2022/10/04 16:08:58 by jinacio-         ###   ########.fr       */
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
    int i = 0;
    while (i < dSecret.length())
    {
        if (!((dSecret[i] >= 65 && dSecret[i] <= 90) || (dSecret[i] >= 97 && dSecret[i] <= 122) || (dSecret[i] == 32)))
        {
            std::cout << "Please, insert only ascii caracters" << std::endl;
            return ;
        }
        i++;
    }
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
    int i = 0;
    while (i < nName.length())
    {
        if (!((nName[i] >= 65 && nName[i] <= 90) || (nName[i] >= 97 && nName[i] <= 122) || (nName[i] == 32)))
        {
            std::cout << "Please, insert only ascii caracters" << std::endl;
            return ;
        }
        i++;
    }
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
    int i = 0;
    while (i < lName.length())
    {
        if (!((lName[i] >= 65 && lName[i] <= 90) || (lName[i] >= 97 && lName[i] <= 122) || (lName[i] == 32) ))
        {
            std::cout << "Please, insert only ascii caracters" << std::endl;
            return ;
        }
        
        i++;
    }
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
    int i = 0;
    while (i < fName.length())
    {
        if (!((fName[i] >= 65 && fName[i] <= 90) || (fName[i] >= 97 && fName[i] <= 122) || (fName[i] == 32)))
        {
            std::cout << "Please, insert only ascii caracters" << std::endl;
            return ;
        }
        i++;
    }
    int numberCount = getNumber( honeyBook);
    honeyBook->teste[numberCount].setFirstName(fName);
    questionLName(honeyBook, numberCount);
}