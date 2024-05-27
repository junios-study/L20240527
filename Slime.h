#pragma once
class FSlime
{
public:
	FSlime();
	~FSlime();

	//interface
	void Move();
	void Attack();
	void Pickup();
	void Slide();

	//accessor
	int GetGold();
	//mutator
	void SetGold(int NewGold);


private:
	int HP;
	int Gold;

	void Die();
};

