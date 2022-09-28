/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:31:41 by jinacio-          #+#    #+#             */
/*   Updated: 2022/09/28 16:35:23 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact( void )
{
    this->name = "jooj";
    return ;
}

Contact::~Contact( void )
{
    return ;
}

std::string Contact::getName ( void )
{
    //std::cout << this->name;
    return 0;
}

std::string Contact::setName ( std::string newName)
{
    //this->name = newName;
    return 0;
}