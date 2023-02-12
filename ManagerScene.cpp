#include "ManagerScene.h"
#include <stdio.h>
#include <stdlib.h>

void ManagerScene::Initialize()
{
}

void ManagerScene::Update(int& scene, std::vector<Manager> &managers)
{

	printf("[�S���Ґݒ�]\n");
	printf("1.�V�K�쐬\n");
	printf("2.�X�V\n");
	printf("3.�폜\n");
	printf("4.�{��\n");

	printf("0.�z�[���ɖ߂�\n");
	printf("�����I�����Ă�������\n");
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

		printf("�X�V����ID����͂��Ă�������\n");
		int id;
		scanf_s("%d", &id);
		if (managers.size() > id) {
			managers[id].Update();
		}
		else {
			printf("����ID�͑��݂��܂���\n");
		}
		break;

	case deleteManager:

		printf("�폜����ID����͂��Ă�������\n");
		scanf_s("%d", &id);
		if (managers.size() > id) {
			managers.erase(managers.begin() + id);
			printf("ID = %d ���폜���܂���\n",id);
		}
		else {
			printf("����ID�͑��݂��܂���\n");
		}
		break;

	case readingManager:

		printf("�{������ID����͂��Ă�������\n");
		printf("���ׂĕ\������ꍇ��[999]�Ɠ���\n");
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
			printf("����ID�͑��݂��܂���\n");
		}

		break;
	}

}
