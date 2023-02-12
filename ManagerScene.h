#pragma once

#include "Manager.h"
#include <vector>

enum ManagerSceneIndex {
	managerReturnHome,	//0 �z�[���ɖ߂�
	makeManager,	//1 �V�K�쐬
	updateManager,	//2	�X�V
	deleteManager,	//3	�폜
	readingManager,	//4	�{��

};


class ManagerScene
{

public:
	void Initialize();

	void Update(int& scene, std::vector<Manager>& managers);

private:

	int scene_;

	int id;

};

