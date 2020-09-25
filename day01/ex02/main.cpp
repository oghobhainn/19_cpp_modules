#include "Zombie.hpp"

Zombie	newZombie(){

	Zombie	z;
	z.setName();
	z.setType();
	return (z);
}

int	main(){

	std::string	ans;
	Zombie	myZombie = newZombie();
	while (1){

	std::cout << "You can interact with him \t(or 'e' to exit)" << std::endl;
	std::getline(std::cin >> std::ws, ans);
	if (ans.compare("e") == 0)
		break;
	else
		myZombie.advert();
	}
	return (0);

}
