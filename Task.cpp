#include "Task.h"
#include <stdio.h>
#include <stdlib.h>

void Task::Initialize(int id)
{
	id_ = id;
	printf("[�^�X�N�V�K�쐬]\n");
	printf("id = %d\n",id_);
	printf("�S���҂̖��O����͂��Ă�������\n");
	scanf_s("%s", managerName_, 20);
	printf("�薼����͂��Ă�������\n");
	scanf_s("%s", title_, 20);
	printf("���e����͂��Ă�������\n");
	scanf_s("%s", &content_, 40);
	printf("�D��x����͂��Ă�������(0:�� 1:�ʏ� 2:�� 3:�}����)\n");
	scanf_s("%d", &priority_);
	printf("��������͂��Ă�������(�N�����̏��ɐ����̂� ��2023�N2��13�� = 20230213)\n");
	scanf_s("%d", &limit_);
}

void Task::ChangeState()
{
	printf("[�^�X�N�X�e�[�^�X�ύX]\n");
	printf("�X�e�[�^�X����͂��Ă������� 0������ 1����\n");
	scanf_s("%d", &state_);
}

void Task::Draw()
{
	printf("[�^�X�N�{��]\n");
	printf("[id]\n");
	printf("%d\n", id_);
	printf("[�S���҂̖��O]\n");
	printf("%s\n", managerName_);
	printf("[�薼]\n");
	printf("%s\n", title_);
	printf("[���e]\n");
	printf("%s\n", content_);
	printf("[�D��x]\n");

	switch (priority_)
	{
	case low:
		printf("���\n");
		break;
	case usually:
		printf("�ʏ�\n");
		break;
	case high:
		printf("����\n");
		break;
	case Hurry:
		printf("�}����\n");
		break;
	}

	printf("[����]\n");

	int limitYear = limit_ / 10000;
	int limitMonth = limit_ / 100 % 100;
	int limitDay = limit_ % 100;

	printf("%d�N%d��%d��\n", limitYear,limitMonth,limitDay);

	printf("[�X�e�[�^�X]\n");
	if (state_) {
		printf("����\n");
	}
	else {
		printf("������\n");
	}
}

