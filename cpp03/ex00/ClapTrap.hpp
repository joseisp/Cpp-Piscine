/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:26:51 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/11 12:26:52 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_CLAPTRAP_HPP
# define EX00_CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	private:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;

	public:

		ClapTrap( void );
		ClapTrap( ClapTrap const & obj );
		ClapTrap( std::string name);
		~ClapTrap( void );

		ClapTrap &	operator=( ClapTrap const & obj );

		void attack( const std::string& target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );

		std::string getName( void ) const;
		unsigned int	getHit( void ) const;
		unsigned int	getEnergy( void )const;
		unsigned int	getAttackD( void ) const;

		void setDamage( unsigned int power );
		void setHP( unsigned int hp );
		void setEnergy( unsigned int vitality );

};

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i );


#endif /* ******************************************************** CLAPTRAP_H */
