#include "Form.hpp"

Form::Form(std::string const& name, int gradeToSign, int gradeToExecute ) :
	m_name(name),
	m_signed(0),
	m_gradeToSign(gradeToSign),
	m_gradeToExecute(gradeToExecute)
{
}

Form::Form(){}

Form::~Form() {}

std::string	Form::getName() const { return m_name; }
bool		Form::getSigned() const { return m_signed; }
int			Form::getGradeToSign() const { return m_gradeToSign; }
int			Form::getGradeToExecute() const { return m_gradeToExecute; }

void		Form::beSigned(Bureaucrat const & b)
{
	try
	{
		if (this->getGradeToSign() <= b.getGrade())
		{
			throw Form::GradeTooLowException();
		}
		else
		{
			this->signForm(b);
		}
	}
	catch( const Form::GradeTooLowException& e)
	{
		std::cerr << b.getName() << e.what() << this->getName() << " because his grade isn't high enough" << std::endl;
	}
	
}

void		Form::signForm(Bureaucrat const & b)
{
	this->m_signed = 1;
	std::cout << "Bureaucrat " << b.getName() << " signs form " << this->getName() << std::endl;
}

//=========== OPERATEURS MEMBRES ==============//

Form &Form::operator=(Form const &other)
{
	this->m_gradeToExecute = other.m_gradeToExecute;
	this->m_gradeToSign = other.m_gradeToSign;
	this->m_signed = other.m_signed;
    return *this;
}

std::ostream & operator<<(std::ostream &out, Form const &rhs)
{
	out << rhs.getName() << ", Form gradeToSign " << rhs.getGradeToSign() << ", gradeToExecute " << rhs.getGradeToExecute() << std::endl;
	return out;
}