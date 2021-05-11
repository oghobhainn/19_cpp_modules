#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <stdexcept>

class Bureaucrat
{
	public:
		Bureaucrat(std::string const &name);
		Bureaucrat(Bureaucrat const & other);
		virtual ~Bureaucrat();
		
		Bureaucrat & operator=(Bureaucrat const &);

		std::string	getName( void ) const;
		int			getGrade( void ) const;

		void	increment( void );
		void	decrement( void );

		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return "Grade Can't be Higher than 1 !";
				}
		};
		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return "Grade can't be lower than 150 !";
				}
		};

	protected:

	private:
		int					m_grade;
		std::string const	m_name;

		Bureaucrat();
};

std::ostream & operator<<(std::ostream & out, Bureaucrat const & rh);

#endif