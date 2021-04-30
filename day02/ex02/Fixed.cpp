#include "Fixed.hpp"

//=========== CONSTRUCTORS / DESTRUCTORS ==============//
Fixed::Fixed() : m_value(0)
{
	//std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::~Fixed()
{
	//std::cout << "Default destructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const & src)
{
	//std::cout << "Copy constructor called" << std::endl;
	this->m_value = src.getRawBits();

	return;
}

Fixed::Fixed(int const n) //constructeur parametrique
{
	//std::cout << "int parametric constructor called" << std::endl;
	this->m_value = n << this->m_nb;
	return;
}

Fixed::Fixed(float const n) //constructeur parametrique
{	
	//std::cout << "float parametric constructor called" << std::endl;
	this->m_value = (int)(roundf(n * (1 << this->m_nb)));
	return;
}

//=========== FONCTIONS MEMBRES ==============//


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


//=========== OPERATEURS MEMBRES ==============//

Fixed	& Fixed::operator=(Fixed const &raw)
{
	//std::cout << "Assignation operator called" << std::endl;
	this->m_value = raw.getRawBits();
	return *this;
}

bool Fixed::operator>(Fixed const & rhs) const
{
	return (this->m_value > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const & rhs) const
{
	return (this->m_value < rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const & rhs) const
{
	return (this->m_value >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const & rhs) const
{
	return (this->m_value <= rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const & rhs) const
{
	return (this->m_value != rhs.getRawBits());
}

bool Fixed::operator==(Fixed const & rhs) const
{
	return (this->m_value == rhs.getRawBits());
}

Fixed Fixed::operator+(Fixed const & rhs) const
{
	Fixed add;
	add.setRawBits(this->m_value + rhs.getRawBits());
	return add;
}

Fixed Fixed::operator-(Fixed const & rhs) const
{
	Fixed sub;
	sub.setRawBits(this->m_value - rhs.getRawBits());
	return sub;
}

Fixed Fixed::operator*(Fixed const & rhs) const
{
	Fixed mul;
	mul.setRawBits((this->m_value * rhs.getRawBits()) >> this->m_nb);
	return mul;
}

Fixed Fixed::operator/(Fixed const & rhs) const
{
	Fixed div;

	div.setRawBits((this->m_value << this->m_nb) / rhs.getRawBits());
	return div;
}

Fixed & Fixed::operator++()
{
	this->m_value++;
	return(*this);
}

Fixed Fixed::operator++(int)
{
	Fixed incr(*this);
	operator++();
	return (incr);
}

Fixed & Fixed::operator--()
{
	this->m_value--;
	return(*this);
}

Fixed Fixed::operator--(int)
{
	Fixed decr(*this);
	operator--();
	return (decr);
}

//=========== FONCTIONS NON MEMBRES ==============//

const Fixed & Fixed::max(const Fixed &lhs, const Fixed &rhs)
{
	return (lhs > rhs ? lhs : rhs);
}

const Fixed & Fixed::min(const Fixed &lhs, const Fixed &rhs)
{
	return (lhs < rhs ? lhs : rhs);
}

//=========== OPERATEURS NON MEMBRES ==============//

std::ostream &operator<<(std::ostream &out, Fixed const &raw)
{
	out << raw.toFloat();
	return out;
}

