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
	//�֐���static�ϐ��Ƃ��Đ錾����

	static SceneManager * instance;

	return instance;

}
