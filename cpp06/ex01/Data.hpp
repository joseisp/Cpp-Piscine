#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>
# include <stdint.h>

class Data
{
	private:
		std::string _name;
		int	_age;
	public:

		Data( void );
		Data (std::string name, int age);
		Data( Data const & src );
		~Data( void );

		Data &		operator=( Data const & rhs );

		std::string getName( void ) const;
		int	getAge( void ) const;

		uintptr_t serialize(Data* ptr);
		Data* deserialize(uintptr_t raw);


};

#endif /* ************************************************************ DATA_H */
