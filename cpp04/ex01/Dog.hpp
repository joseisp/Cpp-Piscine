/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 23:27:41 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/01 13:37:18 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_DOG_HPP
# define EX01_DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* _brain;
		
	public:

		Dog ( void );
		Dog ( Dog const & src );
		virtual ~Dog ( void );

		virtual void makeSound ( void ) const;

		Dog &		operator=( Dog const & obj );

};

//std::ostream &			operator<<( std::ostream & o, Dog const & i );

#endif /* ************************************************************* DOG_H */
