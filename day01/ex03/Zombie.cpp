#include "Zombie.hpp"

Zombie::Zombie() : m_name(""), m_type("")
{
	
}

Zombie::Zombie(std::string const& name, std::string const& type )
	: m_name(name), m_type(type) //m_name = attribut, name = parameter sent to the constructor
{
	std::cout << "A new Zombie has risen !" << std::endl;
	announce();
}

void	Zombie::announce() const{
	std::cout << "< " << m_name << " (" << m_type << ") " << ">" << " Braiiiiiiinnnssss ..." << std::endl;
}

void	Zombie::setName(std::string const& name)
{
	m_name = name;
}

void	Zombie::setType(std::string const& type)
{
	m_type = type;
}

Zombie::~Zombie( void ){
	std::cout << "eeeuuAArhGgHh, back to the tooooomb o.O" << std::endl;
	return ;
}
