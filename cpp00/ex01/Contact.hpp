/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:31:38 by jinacio-          #+#    #+#             */
/*   Updated: 2022/10/11 20:16:37 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>

class Contact
{

public:

    Contact( void );
    ~Contact( void );

    int timeNumber;
    std::string indexNumber;

    std::string getFirstName( void );
    void setFirstName( std::string newFName);
    std::string getLastName ( void );
    void setLastName ( std::string newLName);
    std::string getNickName ( void );
    void setNickName ( std::string newNickName);
    std::string getPhoneNumber ( void );
    void setPhoneNumber (std::string newPhoneNumber);
    std::string getDarkestSecret ( void );
    void setDarkestSecret (std::string newDSecret);
    
    
private:
    std::string _firstName, _lastName, _nickName, _phoneNumber,
    _darkestSecret;

};