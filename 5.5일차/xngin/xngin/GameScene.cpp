#include "stdafx.h"
#include "GameScene.h"

GameScene::GameScene() {
	backgroundInstalate = false;
	score = 0;

	Background* background = new Background();
	background->setPos(0, 0);
	backgroundList.push_back(background);
	AddObject(background);

	Sprite* tmpBridge = new Sprite("Resources/Image/roopmap.png");
	tmpBridge->setPos(0, 500);
	bridgeList.push_back(tmpBridge);

	Sprite* temp1Bridge = new Sprite("Resources/Image/roopmap.png");
	temp1Bridge->setPos(SCREEN_WIDTH, 500);
	bridgeList.push_back(temp1Bridge);

	Sprite* tmpCoin = new Sprite("Resources/Image/coin-yellow.png");
	tmpCoin->setPos(SCREEN_WIDTH+70, 400);
	coinList.push_back(tmpCoin);

	Sprite* tmpObstacle = new Sprite("Resources/Image/Drop.png");
	tmpObstacle->setPos(SCREEN_WIDTH, 400);
	obstacleList.push_back(tmpObstacle);

	player = new Player();


	for (int i = 0; i < 4; i++) {
		numArray[i].setPos(0 + 60 * i, 10);
	}
}
GameScene::~GameScene() {

}

void GameScene::Render() {
	for (auto& background : backgroundList) {
		background->Render();
	}

	for (auto& bridge : bridgeList) {
		bridge->Render();
	}

	for (auto& obstacle : obstacleList) {
		obstacle->Render();
	}

	for (auto& coin : coinList) {
		coin->Render();
	}
	for (int i = 0; i < 4; i++) {
		numArray[i].Render();
	}

	player->Render();
}

void GameScene::Update(float dTime) {
	Scene::Update(dTime);

	int randNum = rand() % 10 + 1;
	int obRandNum = rand() % 500 + 1;

	if (randNum == 1) {
		Sprite* tmpCoin = new Sprite("Resources/Image/coin-yellow.png");
		tmpCoin->setPos(SCREEN_WIDTH + 100, 400);
		coinList.push_back(tmpCoin);
	}
	if (obRandNum == 1) {
		Sprite* tmpObstacle = new Sprite("Resources/Image/Drop.png");
		tmpObstacle->setPos(SCREEN_WIDTH, 400);
		obstacleList.push_back(tmpObstacle);
	}

	

	numArray[0].setNum(score / 1000);
	numArray[1].setNum(score / 100 %10);
	numArray[2].setNum(score / 10 %10);
	numArray[3].setNum(score % 10);

	
	player->Update(dTime);
	int diff = 500 * dTime;

	for (auto iter = backgroundList.begin();iter != backgroundList.end();iter++)
	{
		(*iter)->Update(dTime);
		
		if ((*iter)->getPosX()<-SCREEN_WIDTH) {


			RemoveObject(*iter);
			SAFE_DELETE(*iter);
			backgroundInstalate = false;
			iter = backgroundList.erase(iter);

			if (iter == backgroundList.end()) {
				break;
			}
		}
	}
	
	if (!backgroundInstalate) {
		Background* background = new Background();
		background->setPos(SCREEN_WIDTH - 10, 0);
		backgroundList.push_back(background);
		AddObject(background);
		backgroundInstalate = true;
	}

	for (auto iter = bridgeList.begin(); iter != bridgeList.end(); iter++)
	{
		(*iter)->setPos((*iter)->getPosX()-diff , (*iter)->getPosY());

		if ((*iter)->getPosX() < -SCREEN_WIDTH) {
			SAFE_DELETE(*iter);
			iter = bridgeList.erase(iter);
			Sprite* tmpBridge = new Sprite("Resources/Image/roopmap.png");
			tmpBridge->setPos(SCREEN_WIDTH, 500);
			bridgeList.push_back(tmpBridge);

			if (iter == bridgeList.end()) {
				break;
			}
		}
	}
	for (auto iter = obstacleList.begin(); iter != obstacleList.end(); iter++)
	{
		(*iter)->setPos((*iter)->getPosX()-diff, (*iter)->getPosY());

		if (player->IsCollisionRect((*iter))) {
			sceneManager->ChangeScene(new MainScene());
			return;
		}

		if ((*iter)->getPosX() < -SCREEN_WIDTH) {
			SAFE_DELETE(*iter);
			iter = obstacleList.erase(iter);


			if (iter == obstacleList.end()) {
				break;
			}
		}
	}
	for (auto iter = coinList.begin(); iter != coinList.end(); iter++)
	{
		(*iter)->setPos((*iter)->getPosX()-diff, (*iter)->getPosY());

		
		if ((*iter)->getPosX() < -SCREEN_WIDTH) {
			SAFE_DELETE(*iter);
			iter = coinList.erase(iter);


			if (iter == coinList.end()) {
				break;
			}
		}
	}

	for (auto iter = coinList.begin(); iter != coinList.end(); iter++)
	{

		if (player->IsCollisionRect((*iter))) {
			score += 1;
			SAFE_DELETE(*iter);
			iter = coinList.erase(iter);
		}
		if (iter == coinList.end()) {
			break;
		}
	}
}