#include "stdafx.h"
#include "Background.h"
#include <tgmath.h>

Background::Background() {
	background = new Sprite("Resources/Image/background.png");
	AddChild(background);
}

Background::~Background() {

}

void Background::Render() {
	Object::Render();
	background->Render();
}

void Background::Update(float dTime) {
	Object::Update(dTime);

	setPos(getPosX()- 10, getPosY());
}