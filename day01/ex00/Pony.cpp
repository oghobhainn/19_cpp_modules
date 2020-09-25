#include "Pony.hpp"

Pony::Pony( void ){
	
	std::cout << "New player enters the arena ... it's a pony !" << std::endl;
	return ;
}

void	Pony::setName(){
	std::string	s;
	std::cout << "What's its name ?" << std::endl;
	std::getline(std::cin >> std::ws, s);
	name = s;
}

void	Pony::printName(){

	std::string	s;
	std::cout << name << std::endl;
}

Pony::~Pony ( void ){

	std::cout << "It wasn't called Stewball but " << name << " and it was the best pony ever" << std::endl;
	return;
}
