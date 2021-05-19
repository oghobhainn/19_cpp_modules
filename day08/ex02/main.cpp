#include "mutantstack.hpp"
#include <cstdlib>
#include <ctime>
#include <iterator>
#include <stack>

int main ()
{

	std::srand(std::time(0));

	std::cout << "=========== USUAL STACK ===========" << std::endl;
	{
		std::stack<int>	mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "top : " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "size : " << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		int random;
		for (int i = 0; i < 20; i++)
		{
			random = std::rand() % 1000 + 1;
			mstack.push(random);
		}
		std::cout << std::endl;
/*
		std::stack<int>::container_type::iterator it = mstack->c.begin();
		std::cout << "begin : "<< *it << std::endl;
		std::stack<int>::container_type::iterator ite = mstack->c.end();

		while (it != ite)
		{
			std::cout << *it << ", ";
			++it;
		}
		std::cout << std::endl;

		std::cout << std::endl <<"now in reverse !! esrever ni won" << std::endl;
		ite = mstack.begin();
		it--;
		while (it != ite)
		{
			std::cout << *it << ", ";
			--it;
		}
		std::cout << *it << ", ";

		std::cout << std::endl;*/
	}
	std::cout << std::endl << "=========== MUTANT STACK ===========" << std::endl;
	{
		MutantStack<int>	mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "top : " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "size : " << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		int random;
		for (int i = 0; i < 20; i++)
		{
			random = std::rand() % 1000 + 1;
			mstack.push(random);
		}
	
		MutantStack<int>::iterator it = mstack.begin();
		std::cout << "begin : "<< *it << std::endl;
		MutantStack<int>::iterator ite = mstack.end();

		while (it != ite)
		{
			std::cout << *it << ", ";
			++it;
		}
		std::cout << std::endl;

		std::cout << std::endl <<"now in reverse !! esrever ni won" << std::endl;
		ite = mstack.begin();
		it--;
		while (it != ite)
		{

			std::cout << *it << ", ";
			--it;
		}
		std::cout << *it << ", ";

		std::cout << std::endl;
	}
	return (0);
}