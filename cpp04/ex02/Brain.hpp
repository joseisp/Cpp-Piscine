/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 00:02:02 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/01 15:13:41 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_BRAIN_HPP
# define EX01_BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{

	public:

		Brain( void );
		Brain( Brain const & src );
		~Brain( void );

		Brain &		operator=( Brain const & rhs );

		void setIdeas(std::string idea);
		std::string const getIdeas ( int pos ) const;

	private:
		std::string _ideas[100];

};

std::ostream &			operator<<( std::ostream & o, Brain const & i );

#endif /* *********************************************************** BRAIN_H */
