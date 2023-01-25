#include "Enemy.h"
#include <stdio.h>

void (Enemy::* Enemy::spFunctable[])() = {

	&Enemy::Attack,		//�ߐ�
	&Enemy::Shot,		//�ˌ�
	&Enemy::Secession	//���E

};

Enemy::Enemy()
{
}

void Enemy::Initialize()
{
}

void Enemy::Update(int phase)
{
	//�����o�֐��|�C���^�ɓ����Ă���֐����Ăяo��
	(this->*spFunctable[phase])();

	//���s���̊֐���\��
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
