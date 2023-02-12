#include "ManagerScene.h"
#include <stdio.h>
#include <stdlib.h>

void ManagerScene::Initialize()
{
}

void ManagerScene::Update(int& scene, std::vector<Manager> &managers)
{

	printf("[担当者設定]\n");
	printf("1.新規作成\n");
	printf("2.更新\n");
	printf("3.削除\n");
	printf("4.閲覧\n");

	printf("0.ホームに戻る\n");
	printf("操作を選択してください\n");
	scanf_s("%d", &scene_);

	switch (scene_)
	{
	case managerReturnHome:
		scene = scene_;
		break;
	case makeManager:
		Manager newManager;
		newManager.Initialize(managers.size());
		managers.push_back(newManager);
		break;
	case updateManager:

		printf("更新するIDを入力してください\n");
		int id;
		scanf_s("%d", &id);
		if (managers.size() > id) {
			managers[id].Update();
		}
		else {
			printf("そのIDは存在しません\n");
		}
		break;

	case deleteManager:

		printf("削除するIDを入力してください\n");
		scanf_s("%d", &id);
		if (managers.size() > id) {
			managers.erase(managers.begin() + id);
			printf("ID = %d を削除しました\n",id);
		}
		else {
			printf("そのIDは存在しません\n");
		}
		break;

	case readingManager:

		printf("閲覧するIDを入力してください\n");
		printf("すべて表示する場合は[999]と入力\n");
		scanf_s("%d", &id);
		if (managers.size() > id) {
			managers[id].Draw();
		}
		else if (id == 999) {

			for (int i = 0; i < managers.size(); i++) {
				managers[i].Draw();
			}

		}
		else {
			printf("そのIDは存在しません\n");
		}

		break;
	}

}
