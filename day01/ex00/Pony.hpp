#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

class Pony{

	std::string	name;

public:

	Pony( void );

	void	setName();
	void	printName();
	~Pony( void );
};


#endif
