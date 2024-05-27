#pragma once
class FPlayer
{
public: //접근지정자
	FPlayer();
	~FPlayer();

	//interface
	void Move();
	void Attack();
	void Pickup();

	//accessor
	int GetGold();
	//mutator
	void SetGold(int NewGold);


private:
	int HP;
	int Gold;

	void Die();
};

