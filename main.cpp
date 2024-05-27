#include <iostream>
#include "World.h"
#include "Player.h"
#include "Goblin.h"
#include "Slime.h"
#include "Wildboar.h"

#include <vector>//TArray

using namespace std;


//»ó¼Ó
//Ä¸½¶È­
//´ÙÇü¼º(Ãß»ó), pointer

int main()
{
	FPlayer Player;
	vector<FMonster*> Monsters;
	Monsters.push_back(new FSlime);
	Monsters.push_back(new FSlime);
	Monsters.push_back(new FWildboar);
	Monsters.push_back(new FGoblin);

	for (int i = 0; i < Monsters.size(); ++i)
	{
		Monsters[i]->Move();
	}

	for (int i = 0; i < Monsters.size(); ++i)
	{
		delete Monsters[i];
	}

	//FMonster* Monster = new FSlime();

	//Monster->Move();

	//delete Monster;


	return 0;
}