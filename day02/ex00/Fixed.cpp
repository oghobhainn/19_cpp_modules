#include "Fixed.hpp"

Fixed::Fixed() : m_value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

/*Fixed::Fixed(int const n) : m_value(n) //constructeur parametrique
{
	return;
} */

Fixed::~Fixed()
{
	std::cout << "Default destructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return m_value;
} 

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRwaBits member function called" << std::endl;
	this->m_value = raw;
	return;
}

Fixed	& Fixed::operator=(Fixed const & raw)
{
	std::cout << "Assignation operator called" << std::endl;
	this->m_value = raw.getRawBits();

	return *this;
}
