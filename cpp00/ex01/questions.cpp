/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   questions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:27:19 by jinacio-          #+#    #+#             */
/*   Updated: 2022/10/14 03:45:36 by coder            ###   ########.fr       */
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

void    inputHoneyBook(insertName *inputPhone, int numberCount, PhoneBook * honeyBook)
{
    honeyBook->contact[numberCount].setFirstName(inputPhone->fNameInsert);
    honeyBook->contact[numberCount].setLastName(inputPhone->lNameInsert);
    honeyBook->contact[numberCount].setNickName(inputPhone->nNameInsert);
    honeyBook->contact[numberCount].setPhoneNumber(inputPhone->phoneNInsert);
    honeyBook->contact[numberCount].setDarkestSecret(inputPhone->dSecretInsert);
}

void questionDSecret(PhoneBook *honeyBook, int numberCount, insertName *inputPhone)
{
    std::string dSecret;
    std::cout << "Insert the darkest secret: " << std::endl;
    std::cin.clear();
    std::cin.sync();
    std::getline(std::cin, dSecret);
    std::size_t i = 0;
    std::size_t j = 0;
    if (dSecret.length() > 0)
    {  
        while (i < dSecret.length())
        {
            if (!((dSecret[i] >= 0 && dSecret[i] < 127)))
            {
                std::cout << "Please, insert only ascii caracters" << std::endl;
                return ;
            }
            if (dSecret[i] == 32)
            {
                j++;
                if (j == dSecret.length())
                {
                    std::cout << "ERROR! No spaces empty!!!" << std::endl;
                    return;
                }
            }
            
            i++;
        }
    }
    else
    {
        std::cout << "ERROR!! We need at least one valid caracter" << std::endl; 
        return;
    }
    inputPhone->dSecretInsert = dSecret;
    inputHoneyBook(inputPhone, numberCount, honeyBook);
    honeyBook->contact[numberCount].timeNumber++;
}

void questionPhoneN(PhoneBook *honeyBook, int numberCount, insertName *inputPhone)
{
    std::string phoneN;
    std::cout << "Insert the phone number: " << std::endl;
    std::cin.clear();
    std::cin.sync();
    std::getline(std::cin, phoneN);
    std::size_t i = 0;
    std::size_t j = 0;
    if (phoneN.length() > 0)
    {
        while (i < phoneN.length())
        {
            if (!((phoneN[i] >= 48 && phoneN[i] <= 57) || (phoneN[i] == 32)))
            {
                std::cout << "Please, insert only numbers caracters" << std::endl;
                return ;
            }
            if (phoneN[i] == 32)
            {
                j++;
                if (j == phoneN.length())
                {
                    std::cout << "ERROR! No spaces empty!!!" << std::endl;
                    return;
                }
            }
            i++;
        }
    }
    else
    {
        std::cout << "ERROR!! We need at least one number caracter" << std::endl; 
        return;
    }
    inputPhone->phoneNInsert = phoneN;
    questionDSecret(honeyBook, numberCount, inputPhone);
}

void questionNName(PhoneBook *honeyBook, int numberCount, insertName *inputPhone)
{
    std::string nName;
    std::cout << "Insert the nick name: " << std::endl;
    std::cin.clear();
    std::cin.sync();
    std::getline(std::cin, nName);
    std::size_t j = 0;
    std::size_t i = 0;
    if (nName.length() > 0)
    {  
        while (i < nName.length())
        {
            if (!((nName[i] >= 0 && nName[i] < 127)))
            {
                std::cout << "Please, insert only ascii caracters" << std::endl;
                return ;
            }
            if (nName[i] == 32)
            {
                j++;
                if (j == nName.length())
                {
                    std::cout << "ERROR! No spaces empty!!!" << std::endl;
                    return;
                }
            }
            
            i++;
        }
    }
    else
    {
        std::cout << "ERROR!! We need at least one valid caracter" << std::endl; 
        return;
    }
    inputPhone->nNameInsert = nName;
    questionPhoneN(honeyBook, numberCount, inputPhone);
}

void questionLName(PhoneBook *honeyBook, int numberCount, insertName *inputPhone)
{
    std::string lName;
    std::cout << "Insert the last name: " << std::endl;
    std::cin.clear();
    std::cin.sync();
    std::getline(std::cin, lName);
    std::size_t i = 0;
    std::size_t j = 0;
    if (lName.length() > 0)
    {  
        while (i < lName.length())
        {
            if (!((lName[i] >= 0 && lName[i] < 127)))
            {
                std::cout << "Please, insert only ascii caracters" << std::endl;
                return ;
            }
            if (lName[i] == 32)
            {
                j++;
                if (j == lName.length())
                {
                    std::cout << "ERROR! No spaces empty!!!" << std::endl;
                    return;
                }
            }
            
            i++;
        }
    }
    else
    {
        std::cout << "ERROR!! We need at least one valid caracter" << std::endl; 
        return;
    }
    inputPhone->lNameInsert = lName;
    questionNName(honeyBook, numberCount, inputPhone);
}


void    questionFName(PhoneBook *honeyBook)
{
    insertName inputPhone;

    std::string fName;
    std::cout << CLEAR;
    std::cin.clear();
    std::cin.sync();
    std::cout << "Insert the first name: " << std::endl;
    std::getline(std::cin, fName);
    std::size_t i = 0;
    std::size_t j = 0;
    if (fName.length() > 0)
    {
        while (i < fName.length())
        {
            if (!((fName[i] >= 0 && fName[i] < 127)))
            {
                std::cout << "Please, insert only ascii caracters" << std::endl;
                return ;
            }
            if (fName[i] == 32)
            {
                j++;
                if (j == fName.length())
                {
                    std::cout << "ERROR! No spaces empty!!!" << std::endl;
                    return;
                }
            }
            i++;
        }
    }
    else
    {
        std::cout << "ERROR!! We need at least one valid caracter" << std::endl; 
        return;
    }
    int numberCount = getNumber( honeyBook );
    inputPhone.fNameInsert = fName;
    questionLName(honeyBook, numberCount, &inputPhone);
}