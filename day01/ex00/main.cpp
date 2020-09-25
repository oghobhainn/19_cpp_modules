#include "Pony.hpp"

Pony	ponyOnTheStack(){
	std::cout << "Stack time !" << std::endl;
	Pony	pony;
	pony.setName();
	return	(pony);
}

Pony	*ponyOnTheHeap(){
	std::cout << "Heap time !" << std::endl;
	Pony	*pony = new Pony();
	pony->setName();
	return (pony);
}

int main(){

	std::string	ans;
	Pony	myStackPony = ponyOnTheStack();
	Pony	*myHeapPony = ponyOnTheHeap();
	
	while (1){

		std::cout << "Press ps or ph to print the pony name (or e to exit)" << std::endl;
		std::cin >> ans;
		if (ans.compare("ps") == 0)
			myStackPony.printName();
		else if (ans.compare("ph") == 0)
			myHeapPony->printName();
		else if (ans.compare("e") == 0)
			break;

	}
	delete myHeapPony;
	return (0);

}
