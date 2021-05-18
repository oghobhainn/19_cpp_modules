#include <string>
#include <iostream>
#include "whatever.hpp"

class Exmain
{
	public:
	Exmain() {}
	Exmain(int a) : m_value(a){}
	~Exmain() {}
	Exmain   & operator=(Exmain const &raw)
	{
		if (raw == *this)
			return *this;
		return *this;
	}
	bool operator>(Exmain const & rhs) const{return (this->m_value > rhs.m_value);}
	bool operator<(Exmain const & rhs) const{ return (this->m_value < rhs.m_value);}
	bool operator>=(Exmain const & rhs) const{return (this->m_value >= rhs.m_value);}
	bool operator<=(Exmain const & rhs) const{ return (this->m_value <= rhs.m_value);}
	bool operator!=(Exmain const & rhs) const{return (this->m_value != rhs.m_value);}
	bool operator==(Exmain const & rhs) const{ return (this->m_value == rhs.m_value);}

	int		getValue() const { return this->m_value;}

	private:
		int		m_value;
};

std::ostream& operator<<(std::ostream& out, Exmain const& n)
{
	out << n.getValue();
	return out;
}

int main( void )
{
	int a = 2;
	int b = 3;

	std::cout << "======== INT ======== " << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap( a , b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "======== STRING ======== " << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl;
	::swap( c, d );
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	float e = 15.2f;
	float f = 42.42f;
	std::cout << "======== FLOAT ======== " << std::endl;
	std::cout << "e = " << e << ", f = " << f << std::endl;
	::swap( e, f );
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;
	
	std::cout << "======== DOUBLE ======== " << std::endl;
	double g = 9.81;
	double h = 15.45;
	std::cout << "g = " << g << ", h = " << h << std::endl;
	::swap( g, h );
	std::cout << "g = " << g << ", h = " << h << std::endl;
	std::cout << "min( g, h ) = " << ::min( g, h ) << std::endl;
	std::cout << "max( g, h ) = " << ::max( g, h ) << std::endl;


	char i = 'i';
	char j = 'j';
	std::cout << "======== CHAR ======== " << std::endl;

	std::cout << "i = " << i << ", j = " << j << std::endl;
	::swap( i , j );
	std::cout << "i = " << i << ", j = " << j << std::endl;
	std::cout << "min( i, j ) = " << ::min( i, j ) << std::endl;
	std::cout << "max( i, j ) = " << ::max( i, j ) << std::endl;

	std::cout << "======== OBJS ======== " << std::endl;
	Exmain	*obj1 = new Exmain(12);
	Exmain	*obj2 = new Exmain(24);
	std::cout << "obj1 = " << *obj1 << ", obj2 = " << *obj2 << std::endl;
	::swap( obj1 , obj2 );
	std::cout << "obj1 = " << *obj1 << ", obj2 = " << *obj2 << std::endl;
	std::cout << "min( obj1, obj2 ) = " << *(::min( obj1, obj2 )) << std::endl;
	std::cout << "max( obj1, obj2 ) = " << *(::max( obj1, obj2 )) << std::endl;
	delete obj1;
	delete obj2;
/*
	std::cout << "======== DIFFERENTS ======== " << std::endl;
	int x = 2;
	char y = 'y';
	std::cout << "x = " << x << ", y = " << y << std::endl;
	::swap( x , y );
	std::cout << "x = " << x << ", y = " << y << std::endl;
	std::cout << "min( x, y ) = " << ::min( x, y ) << std::endl;
	std::cout << "max( x, y ) = " << ::max( x, y ) << std::endl;
*/
	return 0;
}