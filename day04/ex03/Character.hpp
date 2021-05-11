#ifndef CHARACTER_HPP
#define CHARACTER_HPP

class Character;
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter
{
	public:
		Character(std::string const & name);
		Character(Character const &other);
		virtual ~Character();

		Character &operator=( Character const & other);

		std::string const & getName( void ) const;
		//AMateria*	const & getInventory( void ) const;
		void	equip(AMateria *m);
		void	unequip(int idx);
		void	use( int idx, ICharacter& target); 

	protected:

	private:
		std::string		m_name;
		AMateria		*m_inventory[4];
		int				m_nbItems;

		Character();
};

#endif