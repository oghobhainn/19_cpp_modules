#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat joe("joe");
	Bureaucrat bob("bob");
	Bureaucrat newbie("newbie");

	for (int i = 0; i < 25; i++)
		bob.increment();
	for (int i = 0; i < 149; i++)
		joe.increment();
	
	std::cout << std::endl << "======= BUREAUCRATS =========" << std::endl;
	std::cout << joe << bob << newbie;

	std::cout << std::endl << "======= ROBOTOMY REQUEST FORM =========" << std::endl;
	RobotomyRequestForm rrf("maison");
	rrf.execute(bob);
	rrf.execute(joe);
	rrf.beSigned(joe);
	rrf.execute(joe);


	std::cout << std::endl << "======= SHRUBBERY CREATION FORM =========" << std::endl;
	ShrubberyCreationForm srf("mygarden");
	srf.execute(newbie);
	srf.execute(joe);
	srf.beSigned(joe);
	srf.execute(joe);

	std::cout << std::endl << "======= PRESIDENTIAL PARDON FORM =========" << std::endl;
	PresidentialPardonForm ppf("jack the rapper");
	ppf.execute(bob);
	ppf.execute(joe);
	ppf.beSigned(joe);
	ppf.execute(joe);

	return 0;
}