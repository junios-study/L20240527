#include <iostream>
#include <vector> 

using namespace std;

#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"

int main()
{
	vector<FShape*> Shapes;

	Shapes.push_back(new FTriangle());
	Shapes.push_back(new FRectangle());
	Shapes.push_back(new FCircle());
	//Shapes.push_back(new FShape());

	for (int i = 0; i < Shapes.size(); ++i)
	{
		Shapes[i]->Draw();
	}

	for (int i = 0; i < Shapes.size(); ++i)
	{
		delete Shapes[i];
	}

	Shapes.clear();

	return 0;
}