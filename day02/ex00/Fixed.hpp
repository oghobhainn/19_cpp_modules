#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int	m_value;
	static const int	nb_bits = 8;

public:
	Fixed(); //consrtucteur par defaut
	Fixed(Fixed const & src); // constructeur par copie
	~Fixed(); //destructeur

	int	getRawBits(void) const; // fonction membre accesseur (getters)
	void	setRawBits(int const raw); //fonction membre mutateur (setters)

	Fixed & operator=(Fixed const & rhs); //overload d'operateur d'assignation
};


#endif