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
	//�R���X�g���N�^��private�ɂ���
	SceneManager();
	//�f�X�g���N�^��private�ɂ���
	~SceneManager();
public:
	//�R�s�[�f�X�g���N�^�𖳌�������
	SceneManager(const SceneManager& obj) = delete;
	//������Z�q�𖳌��ɂ���
	SceneManager& operator=(const SceneManager& obj) = delete;

	static SceneManager* GetInstance();


public:
	//�V�[���؂�ւ�
	void ChangeScene(int &sceneNo);

};

