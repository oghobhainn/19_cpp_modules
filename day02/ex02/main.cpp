#include <iostream>
#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed b(10);
	Fixed const c(42.42f);
	Fixed const d(b);
	a = Fixed(1234.4321f);
	std::cout << "b is " << b << std::endl;
	std::cout << "b++ is " << b++ << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "++b is " << ++b << std::endl;

	std::cout << "b is " << b << std::endl;
	std::cout << "b-- is " << b-- << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "--b is " << --b << std::endl;

	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "c > a	" << (c > a) << std::endl;
	std::cout << "c < b	" << (c < b) << std::endl;
	std::cout << "a >= b	" << (a >= b) << std::endl;
	std::cout << "a <= b	" << (a <= b) << std::endl;
	std::cout << "c != b	" << (c != b) << std::endl;
	std::cout << "a == b	" << (a == b) << std::endl;

	std::cout << "a + b	" << a + b << std::endl;
	std::cout << "c - b	" << c - b << std::endl;
	std::cout << "a * b	" << a * b << std::endl;
	std::cout << "c / b	" << c / b << std::endl;

	Fixed aa;
	Fixed const bb(Fixed(5.05f) * Fixed(2));
	std::cout << aa << std::endl;
	std::cout << ++aa << std::endl;
	std::cout << aa << std::endl;
	std::cout << aa++ << std::endl;
	std::cout << aa << std::endl;
	std::cout << bb << std::endl;
	std::cout << Fixed::max(aa, bb) << std::endl;
	
	return 0;
}