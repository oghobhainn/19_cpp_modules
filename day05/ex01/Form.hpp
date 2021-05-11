#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <stdexcept>
class Form;
#include "Bureaucrat.hpp"

class Form
{
	public:
		Form(std::string const &name, int gradeToSign, int gradeToExecute);
		Form(Form const & other);
		virtual ~Form();

		Form & operator=(Form const &);

		std::string	getName( void ) const;
		bool		getSigned( void ) const;
		int			getGradeToSign( void ) const;
		int			getGradeToExecute( void ) const;

		void		beSigned( Bureaucrat const &b );
		void		signForm( Bureaucrat const &b );

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return (" can't sign ");
				}
		};

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Grade is too high !";
				}
		};

	protected:

	private:
		std::string const	m_name;
		bool				m_signed;
		int					m_gradeToSign;
		int					m_gradeToExecute;

		Form();
};

std::ostream & operator<<(std::ostream & out, Form const & rh);

#endif