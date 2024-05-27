#pragma once
class FGoblin
{
public:
	FGoblin();
	~FGoblin();

	//interface
	void Move();
	void Attack();
	void Pickup();
	void Jump();

	//accessor
	int GetGold();
	//mutator
	void SetGold(int NewGold);


private:
	int HP;
	int Gold;

	void Die();
};

