#include <stdio.h>
#include <iostream>
#include "Enemy.h"

using namespace std;

int main() {

	Enemy* enemy = new Enemy;
	enemy->Initialize();

	while (true) {

		printf("“G‚Ìó‘Ô‚ğ“ü—Í  0 :‹ßÚ@1 :ËŒ‚@2:—£’E \n");
		int input;
		scanf_s("%d", &input);

		enemy->Update(input);

	}

	return 0;

}