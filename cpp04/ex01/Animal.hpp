/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 23:27:18 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/01 00:02:20 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_ANIMAL_HPP
# define EX01_ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	protected:
		std::string _type;

	public:

		Animal ( void );
		Animal (std::string type);
		Animal ( Animal & src );
		virtual ~Animal ( void );

		Animal &		operator=( Animal const & obj );

		void setType ( std::string type);
		std::string const getType( void ) const;
		virtual void	makeSound( void ) const;
};

std::ostream &			operator<<( std::ostream & o, Animal const & i );

#endif /* ********************************************************** ANIMAL_H */
