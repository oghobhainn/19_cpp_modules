#include "iter.hpp"

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

void	ExmainFunction(Exmain x)
{
	std::cout << "exmain() " << x.getValue() << std::endl;
}

int main ( void )
{
	std::cout << "========== CHAR ===========" << std::endl;
	
	char	a1[] = { 'a', 'a', 'a', 'a', 'a'};
	unsigned int a1size = 5;

	for ( unsigned int i = 0; i < a1size; i++){ std::cout << a1[i] << ", " ; }
	std::cout << std::endl;
	iter(a1, a1size, increment<char>);
	for ( unsigned int i = 0; i < a1size; i++){ std::cout << a1[i] << ", " ; }
	std::cout << std::endl;

	std::cout << "========== INT ===========" << std::endl;
	
	int	a2[] = { 0, -12, 889, 54, 42, 18};
	unsigned int a2size = 6;

	for ( unsigned int i = 0; i < a2size; i++){ std::cout << a2[i] << ", " ; }
	std::cout << std::endl;

	iter(a2, a2size, increment<int>);
	
	for ( unsigned int i = 0; i < a2size; i++){ std::cout << a2[i] << ", " ; }
	std::cout << std::endl;
	iter(a2, a2size, decrement<int>);
	iter(a2, a2size, decrement<int>);
	for ( unsigned int i = 0; i < a2size; i++){ std::cout << a2[i] << ", " ; }
	std::cout << std::endl;

	std::cout << "========== DOUBLE ===========" << std::endl;
	
	double	a3[] = { 0.32, -12.84, 889.456, 54.12, 42.0142, 18.18};
	unsigned int a3size = 6;

	for ( unsigned int i = 0; i < a3size; i++){ std::cout << a3[i] << ", " ; }
	std::cout << std::endl;

	iter(a3, a3size, increment<double>);
	
	for ( unsigned int i = 0; i < a3size; i++){ std::cout << a3[i] << ", " ; }
	std::cout << std::endl;

	std::cout << "========== EXMAIN ===========" << std::endl;

	Exmain a4[] = {Exmain(18), Exmain(-12), Exmain(666)};
	unsigned int a4size = 3;

	iter(a4, a4size, ExmainFunction);
	
	return (0);
}