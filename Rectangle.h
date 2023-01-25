#pragma once
#include "IShape.h"
class Rectangle : public IShape
{
public:
	//コンストラクタ
	Rectangle();
	//デストラクタ
	~Rectangle();

public:
	//sideX = 横辺 sideY = 縦辺
	void Initialize(float sideX, float sideY);

	void Size() override;
	void Draw() override;

private:

	float sideX;
	float sideY;

	float size;
};

