#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) :
	AForm("ShrubberyCreation", 145, 137),
	m_target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

std::string	ShrubberyCreationForm::getTarget() const { return m_target; }

void		ShrubberyCreationForm::execute(Bureaucrat const & b)
{
	try
	{	if (this->getSigned() == 0)
		{
			throw ShrubberyCreationForm::FormNotSignedException();
		}
		else if (this->getGradeToExecute() <= b.getGrade())
		{
			throw ShrubberyCreationForm::GradeTooLowException();
		}
		else
		{
			try
			{
				std::ofstream	ofs(this->getTarget() + "_shrubbery");
				if (!ofs)
				{
					throw ShrubberyCreationForm::FileNotOpenedException();
				}
				else
				{
					std::cout << "planting the trees..." << std::endl;
					for (int i = 0; i < 3; i++)
					{
						ofs << "	.     .  .      +     .      .          ." << std::endl;
						ofs << "     .       .      .     #       .           ." << std::endl;
						ofs << "        .      .         ###            .      .      ." << std::endl;
						ofs << "      .      .   *#:. .:##*##:. .:#*  .      ." << std::endl;
						ofs << "          .      . *####*###*####*  ." << std::endl;
						ofs << "       .     *#:.    .:#*###*#:.    .:#*  .        .       ." << std::endl;
						ofs << "  .             *#########*#########*        .        ." << std::endl;
						ofs << "        .    *#:.  *####*###*####*  .:#*   .       ." << std::endl;
						ofs << "     .     .  *#######**##*##**#######*                  ." << std::endl;
						ofs << "                .*##*#####*#####*##*           .      ." << std::endl;
						ofs << "    .   *#:. ...  .:##*###*###*##:.  ... .:#*     ." << std::endl;
						ofs << "      .     *#######*##*#####*##*#######*      .     ." << std::endl;
						ofs << "    .    .     *#####**#######**#####*    .      ." << std::endl;
						ofs << "            .     *      000      *    .     ." << std::endl;
						ofs << "       .         .   .   000     .        .       ." << std::endl;
						ofs << ".. .. ..................O000O........................ ......" << std::endl;
					}
					ofs.close();
				}	
			}
			catch ( const ShrubberyCreationForm::FileNotOpenedException & e)
			{
				std::cerr << this->getTarget() << "_shrubbery " << e.what() << std::endl;
			}
		}
	}
	catch( const ShrubberyCreationForm::GradeTooLowException& e)
	{
		std::cerr << b.getName() << e.what() << this->getName() << " because his grade isn't high enough" << std::endl;
	}
	catch( const ShrubberyCreationForm::FormNotSignedException& e)
	{
		std::cerr << this->getName() << e.what() << std::endl;
	}
	
}

//=========== OPERATEURS MEMBRES ==============//

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	this->m_target = other.m_target;
    return *this;
}