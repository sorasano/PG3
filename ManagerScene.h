#pragma once

#include "Manager.h"
#include <vector>

enum ManagerSceneIndex {
	managerReturnHome,	//0 ホームに戻る
	makeManager,	//1 新規作成
	updateManager,	//2	更新
	deleteManager,	//3	削除
	readingManager,	//4	閲覧

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

