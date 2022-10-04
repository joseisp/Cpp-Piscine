/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:16:26 by jinacio-          #+#    #+#             */
/*   Updated: 2022/10/03 23:32:29 by jinacio-         ###   ########.fr       */
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
        if (honeyBook->teste[i].timeNumber != 0)
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

std::string    getText(PhoneBook *honeyBook, int n1, int n3, int i)
{
    std::string ret;
    if (n1 == 0)
    {
        ret = getIndex(i + 1);
        honeyBook->teste[i].indexNumber = ret;
    }
    else if (n1 == 1)
        ret = honeyBook->teste[i].getFirstName();
    else if (n1 == 2)
        ret = honeyBook->teste[i].getLastName();
    else if (n1 == 3)
        ret = honeyBook->teste[i].getNickName();
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
            if (honeyBook->teste[i].indexNumber == answer)
            {
                std::cout << "First Name: " <<honeyBook->teste[i].getFirstName() << std::endl;
                std::cout << "Last Name: " <<honeyBook->teste[i].getLastName() << std::endl;
                std::cout << "Nick Name: " <<honeyBook->teste[i].getNickName() << std::endl;
                std::cout << "Phone Number: " <<honeyBook->teste[i].getPhoneNumber() << std::endl;
                std::cout << "Darkest Secret: " <<honeyBook->teste[i].getDarkestSecret() << std::endl;
                break;
            }
            i++;
        }
    }
    else
        return ;
}
 
void    showContacts( PhoneBook *honeyBook)
{
    int i = 0;
    int j = 0;
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
            std::string aux = getText(honeyBook, n1, n3, i);
            while (n2 < 10)
            {
                if ((10 - n2) > aux.length())
                    std::cout << " ";
                else
                {
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
        std::cout << "Please, choose de option: " << std::endl;
        std::cout << "[1] add" << std::endl;
        std::cout << "[2] search" << std::endl;
        std::cout << "[0] exit" << std::endl;
        std::cin.clear();
        std::cin.sync();
        std::getline(std::cin, answer);
        if (answer == "1")
            insertNewMember(&honeyBook);
        else if (answer == "2")
        {
            std::cout << CLEAR;
            showContacts(&honeyBook);
        }
        else if (answer == "0")
        {
            std::cout << "Good bye, have a nice day. :)" << std::endl;
            break;
        }
        else if (answer != "0" || answer != "1" || answer != "2" || answer != "")
            std::cout << "Please, try again. :(" << std::endl;
    }
}