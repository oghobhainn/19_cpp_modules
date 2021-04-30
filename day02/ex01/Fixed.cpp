#include "Fixed.hpp"

Fixed::Fixed() : m_value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::~Fixed()
{
	std::cout << "Default destructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	this->m_value = src.getRawBits();

	return;
}

Fixed::Fixed(int const n) //constructeur parametrique
{
	std::cout << "int parametric constructor called" << std::endl;
	this->m_value = n << this->m_nb;
	return;
}

Fixed::Fixed(float const n) //constructeur parametrique
{	
	std::cout << "float parametric constructor called" << std::endl;
	this->m_value = (int)(roundf(n * (1 << this->m_nb)));
	return;
}

int		Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return this->m_value;
} 

void	Fixed::setRawBits(int const raw)
{
	//std::cout << "setRwaBits member function called" << std::endl;
	this->m_value = raw;
	return;
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->m_value) / (float)(1 << this->m_nb));
}

int		Fixed::toInt(void) const
{
	return ((int)(this->m_value) >> this->m_nb);
}

Fixed	& Fixed::operator=(Fixed const &raw)
{
	std::cout << "Assignation operator called" << std::endl;
	this->m_value = raw.getRawBits();

	return *this;
}

std::ostream & operator<<(std::ostream &out, Fixed const &raw)
{
	out << raw.toFloat();
	return out;
}
