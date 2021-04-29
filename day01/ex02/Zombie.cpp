#include "Zombie.hpp"

Zombie::Zombie(std::string const& name, std::string const& type )
	: m_name(name), m_type(type) //m_name = attribut, name = parameter sent to the constructor
{
	std::cout << "A new Zombie has risen !" << std::endl;
	announce();
}

void	Zombie::announce() const{
	std::cout << "< " << m_name << " (" << m_type << ") " << ">" << " Braiiiiiiinnnssss ..." << std::endl;
}

Zombie::~Zombie( void ){
	std::cout << "eeeuuAArhGgHh, back to the tooooomb o.O" << std::endl;
	return ;
}
