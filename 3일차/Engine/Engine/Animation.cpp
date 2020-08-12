#include "stdafx.h"
#include "Animation.h"

Animation::Animation(int fps) {
	this->fps = fps;
	maxFrame = 0;
	currentFrame = 0;
	timeChecker = 0;

	height = 0;
	width = 0;

	color = D3DCOLOR_ARGB(255, 255, 255, 255);
}

Animation::~Animation() {
	for (auto& sprite : spriteVector) {
		SAFE_DELETE(sprite);
	}
}

void Animation::Render() {
	Object::Render();
	if (maxFrame > 0) {
		spriteVector[currentFrame]->Render();
		spriteVector[currentFrame]->setColor(color);
	}
}

void Animation::Update(float dTime) {
	timeChecker += dTime;
	
}

void Animation::AddFrame(char* path) {
	spriteVector.push_back(new Sprite(path));

	AddChild(spriteVector[maxFrame]);

	if (maxFrame == 0) {
		width = spriteVector[maxFrame]->getWidth();
		height = spriteVector[maxFrame]->getHeight();
	}
}