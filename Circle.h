#pragma once
#include "IShape.h"

class Circle : public IShape
{
public:
	//コンストラクタ
	Circle();
	//デストラクタ
	~Circle();

public:
	//radius = 半径
	void Initialize(float radius);

	void Size() override;
	void Draw() override;

private:
	float radius;
	float size;
};

