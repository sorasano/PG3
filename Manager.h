#pragma once
class Manager
{
public:
	// ������
	void Initialize(int id);

	//�X�V
	void Update();

	//�`��
	void Draw();

private:

	//id
	int id_;

	//���O
	char name_[20];

	//�N���X
	char class_[20];

};

