#include <stdio.h>
#include "SceneManager.h"

int main() {

	SceneManager* sceneManager = SceneManager::GetInstance();

	int scene = 0;

	while (true) {

		sceneManager->ChangeScene(scene);

		printf("%d\n", scene);

	}

	return 0;

}