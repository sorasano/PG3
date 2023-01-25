#pragma once
#include "IShape.h"
class Rectangle : public IShape
{
public:
	//�R���X�g���N�^
	Rectangle();
	//�f�X�g���N�^
	~Rectangle();

public:
	//sideX = ���� sideY = �c��
	void Initialize(float sideX, float sideY);

	void Size() override;
	void Draw() override;

private:

	float sideX;
	float sideY;

	float size;
};

