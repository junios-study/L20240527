#include <iostream>
#include "World.h"

using namespace std;

int main()
{
	//FWorld* World;

	//cout << "포인터만 생성" << endl;
	//World = new FWorld();
	//delete World;
	{
		FWorld World;
	}
	cout << "지워지나" << endl;

	return 0;
}