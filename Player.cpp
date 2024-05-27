#include "Player.h"

FPlayer::FPlayer() : HP(0), Gold(0)
{
	//HP = 0;
	//Gold = 0;
}

FPlayer::~FPlayer()
{
}

void FPlayer::Move()
{
	HP = 0;
}

void FPlayer::Die()
{
}

void FPlayer::Attack()
{
}

void FPlayer::Pickup()
{
}

int FPlayer::GetGold()
{
	return Gold;
}

void FPlayer::SetGold(int NewGold)
{
	if (NewGold >= 0)
	{
		Gold = NewGold;
	}
}
