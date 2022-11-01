#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Dog : public Animal
{
	public:

		Dog ( void );
		Dog ( Dog const & src );
		virtual ~Dog ( void );

		virtual void makeSound ( void ) const;

		Dog &		operator=( Dog const & obj );

};

//std::ostream &			operator<<( std::ostream & o, Dog const & i );

#endif /* ************************************************************* DOG_H */
