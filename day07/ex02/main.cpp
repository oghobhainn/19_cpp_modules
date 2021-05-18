#include "Array.hpp"

int main()
{
	std::cout << "====== EMPTY INT (DEFAULT) =========" << std::endl;
	
	Array<> a;
	try
	{
		std::cout << a.getSize() << "  " << a[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
std::cout << "====== FILLED INT (DEFAULT) =========" << std::endl;
	
	Array<> b(10);
	try
	{
		std::cout << b.getSize() << "  " << b[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

std::cout << "====== EMPTY FLOAT =========" << std::endl;
	
	Array<float> c;
	try
	{
		std::cout << c.getSize() << "  " << c[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

std::cout << "====== FILLED FLOAT =========" << std::endl;
	
	Array<float> d(10);
	d[5] = 10.25;
	try
	{
		std::cout << d.getSize() << "  " << d[5] << std::endl;
		std::cout << d.getSize() << "  " << d[11] << std::endl;
 	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

std::cout << "====== COPY =========" << std::endl;
	
	Array<float> f(d);
	try
	{
		std::cout << f.getSize() << "  " << f[5] << std::endl;
		std::cout << f.getSize() << "  " << f[11] << std::endl;
 	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "====== '=' OPERATOR =========" << std::endl;
	
	Array<float> g(5);
	std::cout << g.getSize() << std::endl;
	g = d;
	std::cout << g.getSize() << std::endl;
	try
	{
		std::cout << g.getSize() << "  " << g[5] << std::endl;
		std::cout << g.getSize() << "  " << g[11] << std::endl;
 	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}