#pragma once
class FWildboar
{
public:
	FWildboar();
	~FWildboar();

	//interface
	void Move();
	void Attack();
	void Pickup();
	void Run();

	//accessor
	int GetGold();
	//mutator
	void SetGold(int NewGold);


private:
	int HP;
	int Gold;

	void Die();
};

