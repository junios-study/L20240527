#pragma once
#include "Shape.h"
class FCircle : public FShape
{
public:
	FCircle();
	virtual ~FCircle();

	// Inherited via FShape
	virtual void Draw() override;

	void Do();
};

