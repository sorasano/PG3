#include "Manager.h"
#include <stdio.h>
#include <stdlib.h>

void Manager::Initialize(int id)
{
	id_ = id;
	printf("[�S���ҐV�K�쐬]\n");
	printf("id = %d\n", id_);
	printf("���O����͂��Ă�������\n");
	scanf_s("%s", name_,20);
	printf("�N���X����͂��Ă�������\n");
	scanf_s("%s", &class_,20);

}

void Manager::Update()
{

	printf("[�S���ҏ��X�V]\n");
	printf("���O����͂��Ă�������\n");
	scanf_s("%s", name_, 20);
	printf("�N���X����͂��Ă�������\n");
	scanf_s("%s", &class_, 20);

}

void Manager::Draw()
{
	printf("[�S���ҏ��]\n");
	printf("[ID]\n");
	printf("%d\n",id_);
	printf("[���O]\n");
	printf("%s\n", name_);
	printf("[�N���X]\n");
	printf("%s\n", class_);

}
