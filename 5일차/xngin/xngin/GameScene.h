#pragma once
#include "Scene.h"
#include "Sprite.h"
#include <list>
#include "Animation.h"
#include "MainScene.h"
#include "Number.h"
#include "Player.h"
#include "Background.h"
class GameScene :
	public Scene
{
private:
	int score;
	bool backgroundInstalate;
	std::list<Background*> backgroundList;
	std::list<Sprite*> bridgeList;
	std::list<Sprite*> obstacleList;
	std::list<Sprite*> coinList;
	
	Number numArray[4];

	Player* player;
public:
	GameScene();
	~GameScene();

	void Render();
	void Update(float dTime);
};

