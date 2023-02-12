#include "Task.h"
#include <stdio.h>
#include <stdlib.h>

void Task::Initialize(int id)
{
	id_ = id;
	printf("[タスク新規作成]\n");
	printf("id = %d\n",id_);
	printf("担当者の名前を入力してください\n");
	scanf_s("%s", managerName_, 20);
	printf("題名を入力してください\n");
	scanf_s("%s", title_, 20);
	printf("内容を入力してください\n");
	scanf_s("%s", &content_, 40);
	printf("優先度を入力してください(0:低 1:通常 2:高 3:急いで)\n");
	scanf_s("%d", &priority_);
	printf("期限を入力してください(年月日の順に数字のみ 例2023年2月13日 = 20230213)\n");
	scanf_s("%d", &limit_);
}

void Task::ChangeState()
{
	printf("[タスクステータス変更]\n");
	printf("ステータスを入力してください 0未完了 1完了\n");
	scanf_s("%d", &state_);
}

void Task::Draw()
{
	printf("[タスク閲覧]\n");
	printf("[id]\n");
	printf("%d\n", id_);
	printf("[担当者の名前]\n");
	printf("%s\n", managerName_);
	printf("[題名]\n");
	printf("%s\n", title_);
	printf("[内容]\n");
	printf("%s\n", content_);
	printf("[優先度]\n");

	switch (priority_)
	{
	case low:
		printf("低め\n");
		break;
	case usually:
		printf("通常\n");
		break;
	case high:
		printf("高め\n");
		break;
	case Hurry:
		printf("急いで\n");
		break;
	}

	printf("[期限]\n");

	int limitYear = limit_ / 10000;
	int limitMonth = limit_ / 100 % 100;
	int limitDay = limit_ % 100;

	printf("%d年%d月%d日\n", limitYear,limitMonth,limitDay);

	printf("[ステータス]\n");
	if (state_) {
		printf("完了\n");
	}
	else {
		printf("未完了\n");
	}
}

