#ifndef SHRUBBERY_CREATION_FORM_HPP
#define SHRUBBERY_CREATION_FORM_HPP

#include "AForm.hpp"
#include "fstream"

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm();
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const & target);
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const &);

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

		class FileNotOpenedException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return (" file couldn't be opened");
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