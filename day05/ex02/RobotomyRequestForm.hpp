#ifndef ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm();
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm(std::string const & target);
		RobotomyRequestForm & operator=(RobotomyRequestForm const &);

		std::string getTarget( void ) const ;

		void	execute( Bureaucrat const & b );

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ( " can't execute ");
				}
		};

	protected:

	private:
		std::string		m_target;

};

#endif