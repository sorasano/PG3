#pragma once
#include "Task.h"
#include <vector>

enum TaskSceneIndex{
	taskReturnHome,	//0 ホームに戻る
	makeTask,	//1　新規作成
	updateTask,//2	更新
	readingTask,//2	更新
};

class TaskScene
{

public:
	void Initialize();

	void Update(int& scene,std::vector<Task>& tasks);

private:
	int scene_;

};

