/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:31:38 by jinacio-          #+#    #+#             */
/*   Updated: 2022/09/28 16:35:35 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>

//phonebook ---> uma função --> private name

class Contact
{

public:

    Contact( void );
    ~Contact( void );
    std::string setName( std::string newName);
    std::string getName();
    
private:

    std::string name;

};