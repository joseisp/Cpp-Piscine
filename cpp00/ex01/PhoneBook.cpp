/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:16:39 by jinacio-          #+#    #+#             */
/*   Updated: 2022/10/12 21:13:43 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

PhoneBook::PhoneBook ( void )
{
    std::cout << CLEAR;
    std::cout << "---------- Hello, welcome to the HoneyBook -------------" << std::endl;
    return ;
    
}

PhoneBook::~PhoneBook (void)
{
    std::cout << "Bye!! We looking foward to see you again. S2" << std::endl;
    return ;
}