#include <stdio.h>
#include <iostream>
#include "Circle.h"
#include "Rectangle.h"


using namespace std;

int main() {

	//�~������
	Circle* circle = new Circle;
	circle->Initialize(5.0f);

	//�Z�`������
	Rectangle* rectangle = new Rectangle;
	rectangle->Initialize(2.0f, 4.0f);

	//�v�Z
	circle->Size();
	rectangle->Size();

	//���ʕ`��
	circle->Draw();
	rectangle->Draw();

	return 0;

}