#include "TaskScene.h"
#include <stdio.h>
#include <stdlib.h>

void TaskScene::Initialize()
{
}

void TaskScene::Update(int& scene,std::vector<Task>& tasks)
{

	printf("[タスク設定]\n");
	printf("1.新規作成\n");
	printf("2.ステータス変更\n");
	printf("3.閲覧\n");
	printf("0.ホームに戻る\n");
	printf("操作を選択してください\n");
	scanf_s("%d", &scene_);


	switch (scene_)
	{
	case taskReturnHome:
		scene = scene_;
		break;
	case makeTask:
	{
		Task newTask;
		newTask.Initialize(tasks.size());
		tasks.push_back(newTask);
		break;
	}
	case updateTask:
		printf("ステータス変更するIDを入力してください\n");
		int id;
		scanf_s("%d", &id);
		if (tasks.size() > id) {
			tasks[id].ChangeState();
		}
		else {
			printf("そのIDは存在しません\n");
		}

		break;
	case readingTask:
		printf("閲覧するIDを入力してください\n");
		printf("すべて表示する場合は[999]と入力\n");
		scanf_s("%d", &id);
		if (tasks.size() > id) {
			tasks[id].Draw();
		}
		else if (id == 999) {

			for (int i = 0; i < tasks.size(); i++) {
				tasks[i].Draw();
			}

		}
		else {
			printf("そのIDは存在しません\n");
		}
		break;
	}

}
