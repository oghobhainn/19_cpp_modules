#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	Bureaucrat joe("joe");
	Bureaucrat bob("bob");
	std::cout << bob << std::endl;
	bob.increment();
	std::cout << bob << std::endl;
	bob.decrement();
	std::cout << bob << std::endl;
	bob.decrement();
	for (int i = 0; i < 25; i++)
		bob.increment();
	for (int i = 0; i < 152; i++)
		joe.increment();
	std::cout << bob << std::endl;
	std::cout << joe << std::endl;
	Form f1("order66", 120, 40);
	std::cout << f1;
	f1.beSigned(bob);
	f1.beSigned(joe);


	RobotomyRequestForm rrf("maison");
	rrf.execute(bob);
	rrf.execute(joe);

	return 0;
}