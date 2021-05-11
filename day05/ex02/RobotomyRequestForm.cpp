#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) :
	m_target(target),
	Form("RobotomyRequest", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::~RobotomyRequestForm() {}

std::string	RobotomyRequestForm::getTarget() const { return m_target; }

void		RobotomyRequestForm::execute(Bureaucrat const & b)
{
	try
	{
		if (this->getGradeToExecute() <= b.getGrade())
		{
			throw RobotomyRequestForm::GradeTooLowException();
		}
		else
		{
			std::cout << "BRRRR BRRRR BRRR " << this->getTarget() << " will get robotomized in 50\" !" << std::endl;
		}
	}
	catch( const RobotomyRequestForm::GradeTooLowException& e)
	{
		std::cerr << b.getName() << e.what() << this->getName() << " because his grade isn't high enough" << std::endl;
	}
	
}

//=========== OPERATEURS MEMBRES ==============//

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	this->m_target = other.m_target;
    return *this;
}