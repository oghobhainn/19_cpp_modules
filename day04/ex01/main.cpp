#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"

int main()
{
	// AWeapon awp("sniper", 50, 50); ===== can't do that because it's an abstract class
	PlasmaRifle *pr = new PlasmaRifle();
	PlasmaRifle pr2;

	
	/*
Character* me = new Character("me");
std::cout << *me;
Enemy* b = new RadScorpion();
AWeapon* pr = new PlasmaRifle();
AWeapon* pf = new PowerFist();
me->equip(pr);
std::cout << *me;
me->equip(pf);
me->attack(b);
std::cout << *me;
me->equip(pr);
std::cout << *me;
me->attack(b);
std::cout << *me;
me->attack(b);
std::cout << *me;*/
return 0;
}