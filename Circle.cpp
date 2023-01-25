#include "Circle.h"

float PI = 3.14159265359;

Circle::Circle()
{
	radius = 5.0f;
	size = 0;
}

void Circle::Initialize(float radius)
{
	this->radius = radius;
}

void Circle::Size()
{
	//���a * ���a * 3.14
	size = (radius * radius * PI);

}

void Circle::Draw()
{

	printf("CircleSize = %f\n",size);

}
