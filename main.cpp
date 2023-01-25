#include <stdio.h>
#include <iostream>
#include "Enemy.h"

using namespace std;

int Enemy::isAlive;

int main() {

	Enemy* enemy1 = new Enemy;
	Enemy* enemy2 = new Enemy;
	Enemy* enemy3 = new Enemy;

	printf("enemyArive = %d\n", Enemy::isAlive);
	printf("“|‚·“G‚ð“ü—Í");
	
	int input;
	scanf_s("%d", &input);

	if (input == 1) {
		delete enemy1;
	}
	else if(input == 2) {
		delete enemy2;
	}
	else if (input == 3) {
		delete enemy3;
	}

	printf("enemyArive = %d", Enemy::isAlive);


	return 0;

}