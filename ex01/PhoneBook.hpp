/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 20:20:30 by jinacio-          #+#    #+#             */
/*   Updated: 2022/10/04 19:34:59 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>
#include <stdio.h>
#include "Contact.hpp"

#define CLEAR "\x1B[2J\x1B[H"

class PhoneBook 
{

public:

    
    PhoneBook( void );
    ~PhoneBook( void );

    Contact contact[8];
};

// Functions to run the project

void    questionFName(PhoneBook *honeyBook);