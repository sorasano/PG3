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
	//ŠÖ”“àstatic•Ï”‚Æ‚µ‚ÄéŒ¾‚·‚é

	static SceneManager * instance;

	return instance;

}
