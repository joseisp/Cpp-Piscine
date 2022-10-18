/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 20:20:30 by jinacio-          #+#    #+#             */
/*   Updated: 2022/10/13 04:20:11 by coder            ###   ########.fr       */
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

typedef struct  insertNames
{
    std::string fNameInsert;
    std::string lNameInsert;
    std::string nNameInsert;
    std::string phoneNInsert;
    std::string dSecretInsert;
} insertName;

// Functions to run the project

void    questionFName(PhoneBook *honeyBook);