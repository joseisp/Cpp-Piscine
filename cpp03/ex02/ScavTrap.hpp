/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:39:39 by jinacio-          #+#    #+#             */
/*   Updated: 2022/10/27 22:20:44 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class ScavTrap: public ClapTrap
{

	public:

		ScavTrap( void );
		ScavTrap( std::string name);
		ScavTrap( ScavTrap const & obj );
		~ScavTrap( void );

		ScavTrap &		operator=( ScavTrap const & obj );
		void	attack( const std::string& target );

		void guardGate( void );

};

std::ostream &			operator<<( std::ostream & o, ScavTrap const & i );

#endif /* ******************************************************** SCAVTRAP_H */
