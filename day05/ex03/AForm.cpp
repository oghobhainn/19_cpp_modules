#include "AForm.hpp"

AForm::AForm(std::string const& name, int gradeToSign, int gradeToExecute ) :
	m_name(name),
	m_signed(0),
	m_gradeToSign(gradeToSign),
	m_gradeToExecute(gradeToExecute)
{
}

AForm::AForm(){}

AForm::~AForm() {}

std::string	AForm::getName() const { return m_name; }
bool		AForm::getSigned() const { return m_signed; }
int			AForm::getGradeToSign() const { return m_gradeToSign; }
int			AForm::getGradeToExecute() const { return m_gradeToExecute; }

void		AForm::beSigned(Bureaucrat const & b)
{
	try
	{
		if (this->getGradeToSign() <= b.getGrade())
		{
			throw AForm::GradeTooLowException();
		}
		else
		{
			this->signForm(b);
		}
	}
	catch( const AForm::GradeTooLowException& e)
	{
		std::cerr << b.getName() << e.what() << this->getName() << " because his grade isn't high enough" << std::endl;
	}
	
}

void		AForm::signForm(Bureaucrat const & b)
{
	this->m_signed = 1;
	std::cout << "Bureaucrat " << b.getName() << " signs Form " << this->getName() << std::endl;
}

//=========== OPERATEURS MEMBRES ==============//

AForm &AForm::operator=(AForm const &other)
{
	this->m_gradeToExecute = other.m_gradeToExecute;
	this->m_gradeToSign = other.m_gradeToSign;
	this->m_signed = other.m_signed;
    return *this;
}

std::ostream & operator<<(std::ostream &out, AForm const &rhs)
{
	out << rhs.getName() << ", AForm gradeToSign " << rhs.getGradeToSign() << ", gradeToExecute " << rhs.getGradeToExecute() << std::endl;
	return out;
}