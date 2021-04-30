#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int	m_value;
	static const int	m_nb = 8;

public:
	Fixed(); //consrtucteur par defaut
	~Fixed(); //destructeur
	Fixed(Fixed const & src); // constructeur par copie
	Fixed(int const n); //constructeur parametrique
	Fixed(float const n);

	int		getRawBits(void) const; // fonction membre accesseur (getters)
	void	setRawBits(int const raw); //fonction membre mutateur (setters)
	float	toFloat(void) const;
	int		toInt(void) const;

	Fixed & operator=(Fixed const & rhs); //overload d'operateur d'assignation
};

std::ostream & operator<<(std::ostream & o, Fixed const & raw);

#endif