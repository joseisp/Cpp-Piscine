/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:16:26 by jinacio-          #+#    #+#             */
/*   Updated: 2022/10/14 03:50:19 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    insertNewMember( PhoneBook *honeyBook)
{
    questionFName(honeyBook);
}

void    showTopCategories( void )
{
    std::cout << "|";
    std::cout << "   ";
    std::cout << "index";
    std::cout << "   ";
    std::cout << "first name";
    std::cout << "  ";
    std::cout << "last name";
    std::cout << "  ";
    std::cout << "nickname";
    std::cout << " ";
    std::cout << "|" << std::endl;

}

int whileNumber( PhoneBook *honeyBook )
{
    int i = 0;
    int ret = 0;
    while (i < 8)
    {
        if (honeyBook->contact[i].timeNumber != 0)
        {
            ret++;
        }
        i++;
    }
    if (ret == 0)
        return 1;
    else
        return ret;
}

void    drawBottomOrTop( void )
{
    int j = 0;
    
    while (j < 45)
    {
        std::cout << "-";
        j++;
    }    
}

std::string getIndex(int n3)
{
    std::string ret;
    
    if(n3 == 1)
        ret = "1";
    else if (n3 == 2)
        ret = "2";
    else if (n3 == 3)
        ret = "3";
    else if (n3 == 4)
        ret = "4";
    else if (n3 == 5)
        ret = "5";
    else if (n3 == 6)
        ret = "6";
    else if (n3 == 7)
        ret = "7";
    else if (n3 == 8)
        ret = "8";
    return ret;   
}

std::string    getText(PhoneBook *honeyBook, int n1, int i)
{
    std::string ret;
    if (n1 == 0)
    {
        if (honeyBook->contact[0].timeNumber != 0)
        {
            ret = getIndex(i + 1);
            honeyBook->contact[i].indexNumber = ret;
        }
            
    }
    else if (n1 == 1)
        ret = honeyBook->contact[i].getFirstName();
    else if (n1 == 2)
        ret = honeyBook->contact[i].getLastName();
    else if (n1 == 3)
        ret = honeyBook->contact[i].getNickName();
    return ret;

}

void    showIndex( PhoneBook *honeyBook)
{
    std::string answer;
    int i = 0;
    std::cout << "Would you like to see the Index? [1] Yes [2] No: " << std::endl;
    std::getline(std::cin, answer);
    if (answer == "1")
    {
        std::cout << "Select the index number:" << std::endl;
        std::getline(std::cin, answer);
        
        while (i < 8)
        {
            if (honeyBook->contact[i].indexNumber == answer)
            {
                std::cout << "First Name: " <<honeyBook->contact[i].getFirstName() << std::endl;
                std::cout << "Last Name: " <<honeyBook->contact[i].getLastName() << std::endl;
                std::cout << "Nick Name: " <<honeyBook->contact[i].getNickName() << std::endl;
                std::cout << "Phone Number: " <<honeyBook->contact[i].getPhoneNumber() << std::endl;
                std::cout << "Darkest Secret: " <<honeyBook->contact[i].getDarkestSecret() << std::endl;
                break;
            }
            else if (i + 1 == 8)
                std::cout << "Error, insert a valid index!" << std::endl;
            i++;
        }
    }
    else if (answer == "2")
    {
        std::cout << "Bye bye :)" << std::endl; 
        return ;
    }
    else
    {
        std::cout << "I don't understand you! i'll return you to main menu! :(" << std::endl;
        return ;   
    }
}
 
void    showContacts( PhoneBook *honeyBook)
{
    int i = 0;
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int n4 = 0;
    n3 = whileNumber(honeyBook);
    showTopCategories();
    drawBottomOrTop();
    std::cout << std::endl;
    while(i < n3)
    {
        std::cout << "|";
        while (n1 < 4)
        {
            std::string aux = getText(honeyBook, n1, i);
            while (n2 < 10)
            {
                std::size_t len = 10 - n2;
                if (len > aux.length())
                    std::cout << " ";
                else
                {
                    if (aux.length() > 10 && n2 == 9)
                        std::cout << ".";
                    else
                        std::cout << aux[n4];
                        n4++;       
                }
                n2++;
            }
            n2 = 0;
            n4 = 0;
            n1++;
            std::cout << "|";
        }
        std::cout << std::endl;
        drawBottomOrTop();
        std::cout << std::endl;
        i++;
        n1 = 0;
    }
    std::cout << std::endl;
    showIndex(honeyBook);
}

int main()
{
    PhoneBook honeyBook;
    std::string answer;
    std::cout << "          The biggest phonebook in the world!" <<  std::endl;
    while (1)
    {
        std::cout << "Please, write de option: [ADD] [SEARCH] [EXIT]" << std::endl;
        std::cin.clear();
        std::cin.sync();
        std::getline(std::cin, answer);
        if (answer == "ADD")
            insertNewMember(&honeyBook);
        else if (answer == "SEARCH")
        {
            std::cout << CLEAR;
            showContacts(&honeyBook);
        }
        else if (answer == "EXIT")
        {
            std::cout << "Good bye, have a nice day. :)" << std::endl;
            break;
        }
        else if (answer != "EXIT" || answer != "ADD" || answer != "SEARCH" || answer != "")
            std::cout << "Please, try again. :(" << std::endl;
    }
}