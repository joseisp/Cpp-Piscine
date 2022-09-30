/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:16:26 by jinacio-          #+#    #+#             */
/*   Updated: 2022/09/30 18:23:25 by jinacio-         ###   ########.fr       */
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
    int n2 = 0;
    std::string aux = honeyBook->teste[0].getFirstName();
    showTopCategories();
    while (j < 45)
    {
        std::cout << "-";
        j++;
    }
    std::cout << std::endl;
    j = 0;
    std::cout << "|";
    while (n1 < 4)
    {
        while (n2 < 10)
        {
            if (n2 < aux.length())
                std::cout << aux[i];
            else
                std::cout << " ";
            n2++;
        }
        n2 = 0;
        n1++;
        std::cout << "|";
        //std::cout << " ";
        // i++;
        // if (i == 10)
        // {
        //     n1++;
        //     i = 0;
        // }
    }
    n1 = 0;
    std::cout << std::endl;
    j = 0;
}

int main()
{
    PhoneBook honeyBook;
    std::string testezao = "ai ai ai";
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
        else if (answer == "0")
        {
            std::cout << "Good bye, have a nice day. :)" << std::endl;
            i++;
        }
        else if (answer != "0" || answer != "1" || answer != "2" || answer != "")
            std::cout << "Please, try again. :(" << std::endl;
    }
}