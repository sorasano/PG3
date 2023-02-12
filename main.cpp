

#include "HomeScene.h"
#include "TaskScene.h"
#include "ManagerScene.h"

enum SceneIndex {
	homeScene,	//0
	taskScene,		//1
	managerScene,		//2
};

int main() {

	HomeScene* homescene_ = new HomeScene();
	TaskScene* taskScene_ = new TaskScene();
	ManagerScene* managerScene_ = new ManagerScene();

	std::vector<Manager> managers;	//’S“–ŽÒ
	std::vector<Task> tasks;	//ƒ^ƒXƒN

	int scene = 0;

	while (true)
	{

		switch (scene)
		{
		case homeScene:
			homescene_->Update(scene);
			break;
		case taskScene:
			taskScene_->Update(scene,tasks);
			break;		
		case managerScene:
			managerScene_->Update(scene,managers);
			break;
		}

	}

	return 0;
}
