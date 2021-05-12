#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern &);
		virtual ~Intern();

		Intern & operator=( const Intern & );

		AForm	*makeForm(std::string const & formType, std::string const & target);

	protected:

	private:

};

#endif