#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include <stdexcept>
class AForm;
#include "Bureaucrat.hpp"

class AForm
{
	public:
		AForm();
		AForm(std::string const &name, int gradeToSign, int gradeToExecute);
		AForm(AForm const & other);
		virtual ~AForm();

		AForm & operator=(AForm const &);

		std::string		getName( void ) const;
		bool			getSigned( void ) const;
		int				getGradeToSign( void ) const;
		int				getGradeToExecute( void ) const;

		void			beSigned( Bureaucrat const &b );
		void			signForm( Bureaucrat const &b );
		virtual	void	execute( Bureaucrat const & b ) = 0;


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

};

std::ostream & operator<<(std::ostream & out, AForm const & rh);

#endif