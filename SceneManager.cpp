#include "SceneManager.h"

void SceneManager::ChangeScene(int &sceneNo)
{
	if (sceneNo == GAMECLEAR) {
		sceneNo = TITLE;
	}
	else {
		sceneNo++;
	}

}

SceneManager* SceneManager::GetInstance()
{
	//関数内static変数として宣言する

	static SceneManager * instance;

	return instance;

}
