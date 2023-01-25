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
	//コンストラクタ
	Enemy();
	//デストラクタ
	~Enemy();

public:
	
	//初期化
	void Initialize();

	//更新
	void Update(int phase);

	//近接
	void Attack();

	//射撃
	void Shot();

	//離脱
	void Secession();

private:
	//メンバ関数ポインタのテーブル
	static void (Enemy::* spFunctable[])();

};

