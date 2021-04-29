#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main(){

	Zombie*		z;
	ZombieEvent	zombie_event;
	Zombie		z_stack("jack_stack", "not the musician");

	zombie_event.setZombieType("Priest");
	z = zombie_event.newZombie("Patrick");
	zombie_event.setZombieType("Fleshed_skull");

	delete z;

	for (int i = 0 ; i < 5 ; i++)
	{
		z = zombie_event.randomChump();
		delete z;
	}
	return (0);

}