#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

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

	std::cout << std::endl << "======= INTERNS =========" << std::endl;
	Intern corenting;
	Intern fabieng;

	AForm *corRobReq = corenting.makeForm("robotomy request", "district 13");
	if (corRobReq)
	{
		corRobReq->execute(bob);
		corRobReq->beSigned(joe);
		corRobReq->execute(newbie);
		corRobReq->execute(joe);
	}
	std::cout << std::endl;

	AForm *corShrubCreat = fabieng.makeForm("shrubbery creation", "babylon_babylon");
	if (corShrubCreat)
	{
		corShrubCreat->execute(bob);
		corShrubCreat->beSigned(joe);
		corShrubCreat->execute(newbie);
		corShrubCreat->execute(joe);
	}
	std::cout << std::endl;

	AForm *fabPrePar = fabieng.makeForm("presidential pardon", "Louis");
	if (fabPrePar)
	{
		fabPrePar->execute(bob);
		fabPrePar->beSigned(joe);
		fabPrePar->execute(newbie);
		fabPrePar->execute(joe);
	}
	std::cout << std::endl;

	AForm *wrong = fabieng.makeForm("permit to chill in s19", "becentral");
	if (wrong)
	{
		wrong->execute(bob);
	}
	
	return 0;
}