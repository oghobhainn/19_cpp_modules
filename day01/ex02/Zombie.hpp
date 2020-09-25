#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class	Zombie{

	std::string	name;
	std::string	type;

public:

	Zombie( void );
	
	void	setName();
	void	setType();
	void	advert();

	~Zombie( void );

};

#endif
