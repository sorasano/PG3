#include "TaskScene.h"
#include <stdio.h>
#include <stdlib.h>

void TaskScene::Initialize()
{
}

void TaskScene::Update(int& scene,std::vector<Task>& tasks)
{

	printf("[�^�X�N�ݒ�]\n");
	printf("1.�V�K�쐬\n");
	printf("2.�X�e�[�^�X�ύX\n");
	printf("3.�{��\n");
	printf("0.�z�[���ɖ߂�\n");
	printf("�����I�����Ă�������\n");
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
		printf("�X�e�[�^�X�ύX����ID����͂��Ă�������\n");
		int id;
		scanf_s("%d", &id);
		if (tasks.size() > id) {
			tasks[id].ChangeState();
		}
		else {
			printf("����ID�͑��݂��܂���\n");
		}

		break;
	case readingTask:
		printf("�{������ID����͂��Ă�������\n");
		printf("���ׂĕ\������ꍇ��[999]�Ɠ���\n");
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
			printf("����ID�͑��݂��܂���\n");
		}
		break;
	}

}
