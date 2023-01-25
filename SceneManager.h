#pragma once

enum Scene {

	TITLE,
	NEWGAME,
	GAMEPLAY,
	GAMECLEAR

};

class SceneManager final
{
private:
	//コンストラクタをprivateにする
	SceneManager();
	//デストラクタをprivateにする
	~SceneManager();
public:
	//コピーデストラクタを無効化する
	SceneManager(const SceneManager& obj) = delete;
	//代入演算子を無効にする
	SceneManager& operator=(const SceneManager& obj) = delete;

	static SceneManager* GetInstance();


public:
	//シーン切り替え
	void ChangeScene(int &sceneNo);

};

