#pragma once
#include "Task.h"
#include <vector>

enum TaskSceneIndex{
	taskReturnHome,	//0 �z�[���ɖ߂�
	makeTask,	//1�@�V�K�쐬
	updateTask,//2	�X�V
	readingTask,//2	�X�V
};

class TaskScene
{

public:
	void Initialize();

	void Update(int& scene,std::vector<Task>& tasks);

private:
	int scene_;

};

