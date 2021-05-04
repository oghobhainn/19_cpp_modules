#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{

	std::cout << "======= FRAG TRAP ========" << std::endl;
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

	std::cout << std::endl << "======= SCAV TRAP ========" << std::endl;

	ScavTrap	st("Billy Boy");

	st.rangedAttack("the Mad Hatter");
	st.meleeAttack("The Queen of Hearts");

	st.takeDamage(20);
	st.takeDamage(60);
	st.takeDamage(80);
	st.beRepaired(60);
	st.beRepaired(60);
	st.takeDamage(40);
	st.takeDamage(40);
	st.takeDamage(40);

	st.challengeNewcomer();
	st.challengeNewcomer();
	st.challengeNewcomer();
	st.challengeNewcomer();
	st.challengeNewcomer();

	return 0;
}
