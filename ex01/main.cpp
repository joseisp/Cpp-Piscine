/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:16:26 by jinacio-          #+#    #+#             */
/*   Updated: 2022/09/29 17:30:39 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    insertNewMember( PhoneBook *honeyBook)
{
    int count = 0;
    std::string lName, nName, phoneN, dSecret;
    questionFName(honeyBook);
    // while (count == 1)
    // {
    //     count++;
    // }
    // std::cout << honeyBook.teste[0].getName() << std::endl;
    // std::cout << "escreve um nome do bom ai: " << std::endl;
    // std::cin >> namezao;
    // honeyBook.teste[0].setName(namezao);
    // std::cout << honeyBook.teste[0].getName() << std::endl;

}  

int main()
{
    PhoneBook honeyBook;
    
    int i = 0;
    int answer;
    
    std::cout << "The biggest phonebook in the world!" <<  std::endl;
    while (i == 0)
    {
        std::cout << "Please, choose de option: " << std::endl;
        std::cout << "[1] add" << std::endl;
        std::cout << "[2] search" << std::endl;
        std::cout << "[0] exit" << std::endl;
        std::cin >> answer;
        if (answer == 1)
            insertNewMember(&honeyBook);
        else if (answer == 0 && i++)
            std::cout << "Good bye, have a nice day. :)" << std::endl;
        else if (answer != 0 && answer != 1 && answer != 2)
            std::cout << "Please, try again. :(" << std::endl;
    }
}