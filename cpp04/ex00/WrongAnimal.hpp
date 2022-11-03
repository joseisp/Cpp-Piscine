/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 23:27:55 by jinacio-          #+#    #+#             */
/*   Updated: 2022/10/31 23:27:56 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{

	public:

		WrongAnimal ( void );
		WrongAnimal ( std::string name );
		WrongAnimal ( WrongAnimal const & src );
		virtual ~WrongAnimal( void );

		WrongAnimal &		operator=( WrongAnimal const & rhs );

		void setType ( std::string type);
		std::string const getType( void ) const;
		void	makeSound ( void ) const;

	protected:
		std::string _type;
};

std::ostream &			operator<<( std::ostream & o, WrongAnimal const & i );

#endif /* ***************************************************** WRONGANIMAL_H */
