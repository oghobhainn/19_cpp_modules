#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");

	AMateria* tmp = nullptr;
	AMateria* materia = nullptr;
	tmp = src->createMateria("ice");
	materia = tmp;
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = materia->clone();
	me->equip(tmp);
	tmp = src->createMateria("school's mac");
	me->equip(tmp);
	me->equip(nullptr);
	me->use(-2, *bob);
	me->use(0, *bob);
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);
	me->use(5, *bob);
	std::cout << "XP is " << materia->getXP() << std::endl;
	me->unequip(0);
	me->unequip(-10);

	delete bob;
	delete me;
	delete src;
	return 0;
}