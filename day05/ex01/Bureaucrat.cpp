#include "Bureaucrat.hpp"

//=========== CONSTRUCTORS / DESTRUCTORS ==============//

Bureaucrat::Bureaucrat(std::string const &name):
	m_grade(150),
	m_name(name)
{
}

Bureaucrat::Bureaucrat(Bureaucrat const &other)
{
	*this =other;
}

Bureaucrat::~Bureaucrat( void ) {}

Bureaucrat::Bureaucrat( void ) {}

//=========== FONCTIONS MEMBRES ==============//

std::string	Bureaucrat::getName() const { return m_name;}
int			Bureaucrat::getGrade() const { return m_grade;}

void	Bureaucrat::increment( void )
{
	try
	{
		if (this->getGrade() == 1)
		{
			throw Bureaucrat::GradeTooHighException();
		}
		else
		{
			this->m_grade -= 1;
		}
		
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	Bureaucrat::decrement( void )
{
	try
	{
		if (this->getGrade() == 150)
		{
			throw Bureaucrat::GradeTooLowException();
		}
		else
		{
			this->m_grade += 1;
		}
		
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

//=========== OPERATEURS MEMBRES ==============//

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
	this->m_grade = other.m_grade;

    return *this;
}

std::ostream & operator<<(std::ostream &out, Bureaucrat const &rhs)
{
	out << rhs.getName() << ", Bureaucrat grade " << rhs.getGrade() << std::endl;
	return out;
}