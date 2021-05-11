#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

class MateriaSource;
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	public:
		MateriaSource( void );
		MateriaSource(MateriaSource const &other);
		virtual ~MateriaSource( void );

		MateriaSource &operator=(MateriaSource const &other);

		void	learnMateria(AMateria *m);
		AMateria* createMateria(std::string const &type);
		
	protected:

	private:
		int				m_nbMaterias;
		AMateria		*m_sources[4];

};

#endif