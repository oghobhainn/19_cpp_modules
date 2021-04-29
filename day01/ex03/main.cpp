#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int	main()
{

	std::cout << "		On the Stack" << std::endl;
	ZombieHorde stack_horde(5);
	stack_horde.announce(); 
	std::cout << "		On the Heap" << std::endl;
	ZombieHorde *heap_horde = new ZombieHorde(7);
	heap_horde->announce();
	delete heap_horde;
	std::cout << "		Destroying the stack" << std::endl;
	return (0);

}
