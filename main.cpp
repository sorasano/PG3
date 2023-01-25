#include <stdio.h>
#include <iostream>
#include "Enemy.h"

using namespace std;

int Enemy::isAlive;

int main() {

	Enemy* enemy1 = new Enemy;
	Enemy* enemy2 = new Enemy;
	Enemy* enemy3 = new Enemy;

	enemy1->Initialize();
	enemy2->Initialize();
	enemy3->Initialize();

	printf("enemyAlive = %d\n", Enemy::isAlive);
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

	printf("enemyAlive = %d", Enemy::isAlive);


	return 0;

}