#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
class AMateria;
#include "ICharacter.hpp"
#include "Character.hpp"

class AMateria
{
	public:
		AMateria( std::string const & type );
		AMateria( AMateria const & );
		virtual ~AMateria();

		AMateria & operator=(AMateria const &);

		std::string const & getType() const;
		unsigned int getXP() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	protected:
		std::string		m_type;
		unsigned int	m_xp;

	
	private:
		AMateria();
};

#endif