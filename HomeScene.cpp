#include "HomeScene.h"
#include <stdio.h>
#include <stdlib.h>

void HomeScene::Initialize()
{
}

void HomeScene::Update(int &scene)
{
	printf("[�z�[��]\n");
	printf("1.�^�X�N�̐ݒ�\n");
	printf("2.�S���҂̐ݒ�\n");
	printf("�����I�����Ă�������\n");
	scanf_s("%d", &scene);

}
