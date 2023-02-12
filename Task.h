#pragma once
#include "Manager.h"
#include <vector>

enum Priority {
	low,		//0 ���
	usually,	//1 ����
	high,		//2 ����
	Hurry		//3 �}����
};

class Task
{
public:
	// ������
	void Initialize(int id);

	//�X�e�[�^�X�ύX
	void ChangeState();

	//�{��
	void Draw();

private:

	//id
	int id_;
	
	//�S����
	char managerName_[20];

	//�薼
	char title_[20];

	//���e
	char content_[40];

	//�D��x
	int priority_;

	//���� (�N�����̏��ɐ����̂� ��2023�N2��13�� = 20230213)
	int limit_;

	//�X�e�[�^�X 1����0������
	bool state_ = false;
};

