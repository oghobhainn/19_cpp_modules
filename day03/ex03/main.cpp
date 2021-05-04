#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{

	std::cout << "======= FRAG TRAP ========" << std::endl;
	FragTrap	ft("Beatrix Kiddo");

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
	
	std::cout << std::endl << "======= NINJA TRAP ========" << std::endl;

	NinjaTrap	nt("Otori Takeo");

	nt.rangedAttack("Kim-Jong-Un");
	nt.meleeAttack("a wild gaijin");
	nt.takeDamage(20);
	nt.takeDamage(20);
	nt.takeDamage(80);
	nt.beRepaired(60);
	nt.beRepaired(60);
	nt.takeDamage(40);
	nt.takeDamage(40);
	nt.takeDamage(40);
	nt.ninjaShoeBox(ft);
	nt.ninjaShoeBox(st);
	nt.ninjaShoeBox(nt);

	std::cout << std::endl << "======= DESTRUCTORS ========" << std::endl;
	return 0;
}
