#include <stdio.h>
#include <iostream>
#include "Circle.h"
#include "Rectangle.h"


using namespace std;

int main() {

	//‰~‰Šú‰»
	Circle* circle = new Circle;
	circle->Initialize(5.0f);

	//’ZŒ`‰Šú‰»
	Rectangle* rectangle = new Rectangle;
	rectangle->Initialize(2.0f, 4.0f);

	//ŒvŽZ
	circle->Size();
	rectangle->Size();

	//Œ‹‰Ê•`‰æ
	circle->Draw();
	rectangle->Draw();

	return 0;

}