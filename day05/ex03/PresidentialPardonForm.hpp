#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm();
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm(std::string const & target);
		PresidentialPardonForm & operator=(PresidentialPardonForm const &);

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

		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ( " Form isn't signed");
				}	
		};

	protected:

	private:
		std::string		m_target;

};

#endif