#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Cat : public Animal
{

	public:

		Cat ( void );
		Cat ( Cat const & src );
		virtual ~Cat ( void );


		Cat &		operator=( Cat const & obj );

		virtual void makeSound ( void ) const;

};

std::ostream &			operator<<( std::ostream & o, Cat const & i );

#endif /* ************************************************************* CAT_H */
