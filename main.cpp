#include <iostream>
#include "World.h"
#include "Player.h"
#include "Goblin.h"
#include "Slime.h"
#include "Wildboar.h"

#include <vector>//TArray

using namespace std;


int main()
{
	srand(time(0));
	FPlayer Player;
	int GoblinCount = rand() % 3 + 1;
	vector<FGoblin*> Goblins;

	for (int i = 0; i < GoblinCount; ++i)
	{
		Goblins.push_back(new FGoblin);
		Goblins[i]->SetGold(100 + i);
	}

	for (int i = 0; i < GoblinCount; ++i)
	{
		cout << Goblins[i]->GetGold() << endl;
	}

	for (int i = 0; i < GoblinCount; ++i)
	{
		delete Goblins[i];
	}

	Goblins.clear();

	int SlimeCount = rand() % 3 + 1;
	vector<FSlime*> Slimes;

	for (int i = 0; i < SlimeCount; ++i)
	{
		Slimes.push_back(new FSlime);
		Slimes[i]->SetGold(100 + i);
	}

	for (int i = 0; i < SlimeCount; ++i)
	{
		cout << Slimes[i]->GetGold() << endl;
	}

	for (int i = 0; i < SlimeCount; ++i)
	{
		delete Slimes[i];
	}

	Slimes.clear();


	return 0;
}