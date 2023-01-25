#include "Enemy.h"
#include <stdio.h>

void (Enemy::* Enemy::spFunctable[])() = {

	&Enemy::Attack,		//近接
	&Enemy::Shot,		//射撃
	&Enemy::Secession	//離脱

};

Enemy::Enemy()
{
}

void Enemy::Initialize()
{
}

void Enemy::Update(int phase)
{
	//メンバ関数ポインタに入っている関数を呼び出す
	(this->*spFunctable[phase])();

	//実行中の関数を表示
	if (phase == ATTACK) {
		printf("phase = Attack\n");
	}
	else if (phase == SHOT) {
		printf("phase = Shot\n");
	}
	else if (phase == SECESSION) {
		printf("phase = Secession\n");
	}

}

void Enemy::Attack()
{
}

void Enemy::Shot()
{
}

void Enemy::Secession()
{
}
