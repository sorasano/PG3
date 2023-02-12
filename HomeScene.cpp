#include "HomeScene.h"
#include <stdio.h>
#include <stdlib.h>

void HomeScene::Initialize()
{
}

void HomeScene::Update(int &scene)
{
	printf("[ホーム]\n");
	printf("1.タスクの設定\n");
	printf("2.担当者の設定\n");
	printf("操作を選択してください\n");
	scanf_s("%d", &scene);

}
