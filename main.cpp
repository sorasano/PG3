#include <stdio.h>
#include <iostream>
#include "Enemy.h"

using namespace std;

int main() {

	Enemy* enemy = new Enemy;
	enemy->Initialize();

	while (true) {

		printf("�G�̏�Ԃ����  0 :�ߐځ@1 :�ˌ��@2:���E \n");
		int input;
		scanf_s("%d", &input);

		enemy->Update(input);

	}

	return 0;

}