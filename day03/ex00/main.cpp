#include "FragTrap.hpp"

int main()
{

	FragTrap	ft("Beatrice Kiddo");

	ft.rangedAttack("the White Rabbit");
	ft.meleeAttack("the Jabberwocky");

	ft.takeDamage(20);
	ft.takeDamage(60);
	ft.takeDamage(80);
	ft.beRepaired(60);
	ft.beRepaired(60);
	ft.takeDamage(40);

	ft.vaulthunter_dot_exe("Riri");
	ft.vaulthunter_dot_exe("Fifii");
	ft.vaulthunter_dot_exe("LouLou");
	ft.vaulthunter_dot_exe("Pixou");
	ft.vaulthunter_dot_exe("a tiny hamster");

	return 0;
}
