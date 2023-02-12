#pragma once
#include "Manager.h"
#include <vector>

enum Priority {
	low,		//0 低め
	usually,	//1 普通
	high,		//2 高め
	Hurry		//3 急いで
};

class Task
{
public:
	// 初期化
	void Initialize(int id);

	//ステータス変更
	void ChangeState();

	//閲覧
	void Draw();

private:

	//id
	int id_;
	
	//担当者
	char managerName_[20];

	//題名
	char title_[20];

	//内容
	char content_[40];

	//優先度
	int priority_;

	//期限 (年月日の順に数字のみ 例2023年2月13日 = 20230213)
	int limit_;

	//ステータス 1完了0未完了
	bool state_ = false;
};

