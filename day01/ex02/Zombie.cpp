#include "Zombie.hpp"

Zombie::Zombie ( void ){
	std::cout << "A new Zombie has risen !" << std::endl;
	return;
}

void	Zombie::setName(){
	std::string s;
	std::cout << "What's its name ?" << std::endl;
	std::getline(std::cin >> std::ws, s);
	name = s;
}

void	Zombie::setType(){
	std::string s;
	while (1){
		std::cout << "What's its type ? [warrior - priest - karen]" << std::endl;
		std::getline(std::cin >> std::ws, s);
		if (!(s.compare("Warrior"))){
			type = s;
			break;
		}
		else if (!(s.compare("Priest"))){
			type = s;
			break;
		}
		else if (!(s.compare("Karen"))){
			type = s;
			break;
		}
		else
			std::cout << "That's not a real zombie type ... and I know some shit about zombies *reloads gun*" << std::endl;
	}
}

void	Zombie::advert(){
	std::cout << "< " << name << " (" << type << ") " << ">" << " Braiiiiiiinnnssss ..." << std::endl;
}

Zombie::~Zombie( void ){
	std::cout << "eeeuuAArhGgHh, back to the tooooomb o.O" << std::endl;
	return ;
}
