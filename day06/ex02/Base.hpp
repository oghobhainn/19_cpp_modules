#ifndef BASE_HPP
#define BASE_HPP

#include <string>
#include <iostream>

class Base
{
	public:
		virtual ~Base();
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif