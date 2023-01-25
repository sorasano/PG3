#include <stdio.h>
#include <iostream>
#include "Circle.h"
#include "Rectangle.h"


using namespace std;

int main() {

	//円初期化
	Circle* circle = new Circle;
	circle->Initialize(5.0f);

	//短形初期化
	Rectangle* rectangle = new Rectangle;
	rectangle->Initialize(2.0f, 4.0f);

	//計算
	circle->Size();
	rectangle->Size();

	//結果描画
	circle->Draw();
	rectangle->Draw();

	return 0;

}