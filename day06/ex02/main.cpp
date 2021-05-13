#include "Base.hpp"
#include <ctime>

Base * generate( void )
{
	int r = rand() % 3;
	if (r == 0)
		return new A();
	else if (r == 1)
		return new B();
	else
		return new C();
}

void identify_from_pointer(Base * p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
	else
		std::cout << "not an identifiable pointer" << std::endl;
}

void identify_from_reference(Base & p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		//std::cerr << e.what() << '\n';
	}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		//std::cerr << e.what() << '\n';
	}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return ;	
	}
	catch(const std::exception& e)
	{
		//std::cerr << e.what() << '\n';
	}
	std::cout << "not an identifiable ref" << std::endl;
}

int main()
{
	srand(time(NULL));
	std::cout << "=============== POINTER ===============" << std::endl;
	Base *a = new A();
	Base *b = new B();
	Base *c = new C();
	identify_from_pointer(a);
	identify_from_pointer(b);
	identify_from_pointer(c);
	delete a;
	delete b;
	delete c;
	
	std::cout << std::endl << "=============== REFEREFENCE ===============" << std::endl;
	A aa;
	B bb;
	C cc;
	identify_from_reference(aa);
	identify_from_reference(bb);
	identify_from_reference(cc);	
	std::cout << std::endl << "=============== RANDOM GENERATE ===============" << std::endl;
	for (int i = 0; i < 5; i++)
	{
	    Base *bbb = generate();
	    identify_from_pointer(bbb);
	    identify_from_reference(*bbb);
	    delete bbb;
	    std::cout << "---" << std::endl;
	}
}