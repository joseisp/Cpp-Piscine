/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:16:26 by jinacio-          #+#    #+#             */
/*   Updated: 2022/09/30 15:59:55 by jinacio-         ###   ########.fr       */
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
 
void    showContacts( PhoneBook *honeyBook)
{
    int i = 0;
    int j = 0;
    int n1 = 0;
    showTopCategories();
    while (j < 45)
    {
        std::cout << "-";
        j++;
    }
    std::cout << std::endl;
    j = 0;
    while (j < 1)
    {
        std::cout << "|";
        while (n1 < 4)
        {
            std::cout << " ";
            i++;
            if (i == 10)
            {
                n1++;
                i = 0;
                std::cout << "|";
            }
        }
        j++;
        n1 = 0;
        std::cout << std::endl;
    }
    j = 0;
    while (j < 45)
    {
        std::cout << "-";
        j++;
    }
    std::cout << std::endl;
}

int main()
{
    PhoneBook honeyBook;
    
    int i = 0;
    std::string answer;
    
    std::cout << "          The biggest phonebook in the world!" <<  std::endl;
    while (i == 0)
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
        else if (answer == "0" && i++)
            std::cout << "Good bye, have a nice day. :)" << std::endl;
        else if (answer != "0" || answer != "1" || answer != "2" || answer != "")
            std::cout << "Please, try again. :(" << std::endl;
    }
}