#pragma once
#include "IShape.h"

class Circle : public IShape
{
public:
	//�R���X�g���N�^
	Circle();
	//�f�X�g���N�^
	~Circle();

public:
	//radius = ���a
	void Initialize(float radius);

	void Size() override;
	void Draw() override;

private:
	float radius;
	float size;
};

