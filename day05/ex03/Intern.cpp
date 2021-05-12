#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const & other)
{
	*this = other;
}

Intern::~Intern() {}

Intern & Intern::operator=(Intern const & other)
{
	//if (this == &other)
	if (this == &other)
		return (*this);
	return (*this);
}

static AForm*	createPresidentialPardonForm( std::string const & target )
{
	return (new PresidentialPardonForm(target));
}

static AForm*	createRobotomyRequestForm( std::string const & target )
{
	return (new RobotomyRequestForm(target));	
}

static AForm*	createShrubberyCreationForm( std::string const & target )
{
	return (new ShrubberyCreationForm(target));
}

AForm*	Intern::makeForm(std::string const & formType, std::string const & target)
{
	AForm*	form;
	typedef AForm*	(*func)(std::string const & target);
	typedef struct
	{ 
		std::string formType;
		func fun;
	}	FormTypes;

	form = nullptr;
	FormTypes	formTypes[] = 
	{
		{"shrubbery creation", &createShrubberyCreationForm},
		{"robotomy request", & createRobotomyRequestForm},
		{"presidential pardon", &createPresidentialPardonForm}
	};

	for (int i = 0; i < 3; i++)
	{
		if (formTypes[i].formType == formType)
		{
			form = formTypes[i].fun(target);
			std::cout << "Intern creates " << form->getName() << std::endl;
			return form;
		}
	}
	std::cerr << "The form type isn't in the possibilites, the Intern can't create it" << std::endl;
	return nullptr;
}


