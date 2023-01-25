#pragma once

enum EnemyPhase {
	ATTACK,
	SHOT,
	SECESSION
};

class Enemy
{
protected:

public:
	//�R���X�g���N�^
	Enemy();
	//�f�X�g���N�^
	~Enemy();

public:
	
	//������
	void Initialize();

	//�X�V
	void Update(int phase);

	//�ߐ�
	void Attack();

	//�ˌ�
	void Shot();

	//���E
	void Secession();

private:
	//�����o�֐��|�C���^�̃e�[�u��
	static void (Enemy::* spFunctable[])();

};

