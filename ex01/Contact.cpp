/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:31:41 by jinacio-          #+#    #+#             */
/*   Updated: 2022/09/30 15:57:26 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact( void )
{
    this->timeNumber = 0;
    return ;
}

Contact::~Contact( void )
{
    return ;
}

std::string Contact::getFirstName ( void )
{
    return this->_firstName;
}

void Contact::setFirstName ( std::string fName)
{
    this->_firstName = fName;
    return ;
}

std::string Contact::getLastName( void )
{
    return this->_lastName;
}

void Contact::setLastName (std::string lName)
{
    this->_lastName = lName;
    return ;
}

std::string Contact::getNickName ( void )
{
    return this->_nickName;
}

void Contact::setNickName (std::string nName)
{
    this->_nickName = nName;
    return ;
}

std::string Contact::getPhoneNumber ( void )
{
    return this->_phoneNumber;
}

void Contact::setPhoneNumber (std::string phoneN)
{
    this->_phoneNumber = phoneN;
    return ;
}

std::string Contact::getDarkestSecret ( void )
{
    return this->_darkestSecret;
}

void Contact::setDarkestSecret (std::string dSecret)
{
    this->_darkestSecret = dSecret;
    return ;
}