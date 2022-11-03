/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 23:27:18 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/01 15:33:31 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX02_AANIMAL_HPP
# define EX02_AANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal
{
	protected:
		std::string _type;

	public:

		AAnimal ( void );
		AAnimal (std::string type);
		AAnimal ( AAnimal & src );
		virtual ~AAnimal ( void );

		AAnimal &		operator=( AAnimal const & obj );

		void setType ( std::string type);
		std::string const getType( void ) const;
		virtual void	makeSound( void ) const = 0;
};

std::ostream &			operator<<( std::ostream & o, AAnimal const & i );

#endif /* ********************************************************** AAnimal_H */
