#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) :
	AForm("PresidentialPardon", 25, 5),
	m_target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm() {}

PresidentialPardonForm::~PresidentialPardonForm() {}

std::string	PresidentialPardonForm::getTarget() const { return m_target; }

void		PresidentialPardonForm::execute(Bureaucrat const & b)
{
	try
	{
		if (this->getGradeToExecute() <= b.getGrade())
		{
			throw PresidentialPardonForm::GradeTooLowException();
		}
		else if (this->getSigned() == 0)
		{
			throw PresidentialPardonForm::FormNotSignedException();
		}
		else
		{
			std::cout << this->getTarget() << " has been gracied by Zafod Beeblebox" << std::endl;
		}
	}
	catch( const PresidentialPardonForm::GradeTooLowException& e)
	{
		std::cerr << b.getName() << e.what() << this->getName() << " because his grade isn't high enough" << std::endl;
	}
	catch( const PresidentialPardonForm::FormNotSignedException& e)
	{
		std::cerr << this->getName() << e.what() << std::endl;
	}
	
}

//=========== OPERATEURS MEMBRES ==============//

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	this->m_target = other.m_target;
    return *this;
}