#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"

int main()
{
	ISpaceMarine* tm = new TacticalMarine;
	ISpaceMarine* at = new AssaultTerminator;
	AssaultTerminator	*Schwarzi = new AssaultTerminator;
	AssaultTerminator *T_300 = new AssaultTerminator(*Schwarzi);
	TacticalMarine *spad = new TacticalMarine;
	ISpaceMarine	*neil = new TacticalMarine(*spad);

	std::cout << std::endl;

	ISquad* squad = new Squad;
	ISquad*	A_Team = new Squad;	
	squad->push(tm);
	squad->push(at);
	squad->push(T_300);
	for (int i = 0; i < squad->getCount(); ++i)
	{
		ISpaceMarine* cur = squad->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete squad;
	A_Team->push(spad);
	A_Team->push(neil);
	for (int i = 0; i < A_Team->getCount(); ++i)
	{
		ISpaceMarine* cur = A_Team->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete A_Team;
	delete Schwarzi;

    return 0;
}