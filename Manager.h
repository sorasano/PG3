#pragma once
class Manager
{
public:
	// 初期化
	void Initialize(int id);

	//更新
	void Update();

	//描画
	void Draw();

private:

	//id
	int id_;

	//名前
	char name_[20];

	//クラス
	char class_[20];

};

