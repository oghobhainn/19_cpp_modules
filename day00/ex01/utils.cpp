#include "Phonebook.class.hpp"
#include <string>
#include <iostream>

void	crop_print(std::string name)
{
	if (name.length() < 10){
		std::cout << std::string(10 - name.length(), ' ') << name << "|";
	}
	else{
		std::string first_nine = name.substr(0, 9);
		std::cout << first_nine << ".|";
	}
}
