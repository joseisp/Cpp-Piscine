#ifndef CONVERTING_HPP
# define CONVERTING_HPP

# include <iostream>
# include <string>

class Converting
{
	private:

	public:

		Converting( void );
		Converting( Converting const & src );
		~Converting( void );

		Converting &		operator=( Converting const & rhs );

};

std::ostream &			operator<<( std::ostream & o, Converting const & i );

#endif /* ****************************************************** CONVERTING_H */
