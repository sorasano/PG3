#include "Manager.h"
#include <stdio.h>
#include <stdlib.h>

void Manager::Initialize(int id)
{
	id_ = id;
	printf("[担当者新規作成]\n");
	printf("id = %d\n", id_);
	printf("名前を入力してください\n");
	scanf_s("%s", name_,20);
	printf("クラスを入力してください\n");
	scanf_s("%s", &class_,20);

}

void Manager::Update()
{

	printf("[担当者情報更新]\n");
	printf("名前を入力してください\n");
	scanf_s("%s", name_, 20);
	printf("クラスを入力してください\n");
	scanf_s("%s", &class_, 20);

}

void Manager::Draw()
{
	printf("[担当者情報]\n");
	printf("[ID]\n");
	printf("%d\n",id_);
	printf("[名前]\n");
	printf("%s\n", name_);
	printf("[クラス]\n");
	printf("%s\n", class_);

}
