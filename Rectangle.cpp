#include "Rectangle.h"

Rectangle::Rectangle()
{
	sideX = 2.0f;
	sideY = 4.0f;

	size = 0.0f;
}

void Rectangle::Initialize(float sideX,float sideY)
{

	this->sideX = sideX;
	this->sideY = sideY;

}

void Rectangle::Size()
{
	//èc * â°
	size = sideX * sideY;

}

void Rectangle::Draw()
{
	printf("RectangleSize = %f\n", size);
}
