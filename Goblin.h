#pragma once

#include "Monster.h"

//����
// 
//�����Ѵ�.
//�޸տ����� ���δ�.
//encapsulation
class FGoblin : public FMonster
{
public:
	FGoblin();
	virtual ~FGoblin();

	void Jump();

	virtual void Move() override;
};

