#pragma once
class Enemy
{
protected:
public:
	static int isAlive;
	Enemy() { isAlive = true; }
	~Enemy() { isAlive = false; }

};

