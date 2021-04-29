#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(std::string const & type){

	m_type = type;

}

Zombie	*ZombieEvent::newZombie(std::string name){

	return new Zombie(name, m_type);

}

Zombie	*ZombieEvent::randomChump()
{

	std::string pool[10] = {
		"cmcgahan",
		"Bea_Kiddo",
		"Boaty-Mc-BoatyFace",
		"NoPainNoGain",
		"CucumBruh",
		"Andre-Charles",
		"Dipper",
		"Bill",
		"Mr.Corleone",
		"NaNaNaBatman",
	};
	
	return (newZombie(pool[rand() % 10]));
}
