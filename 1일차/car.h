#pragma once
#include<iostream>
#include<string>

using namespace std;

class car
{
protected://Ŭ���� ����� �⺻ ����



public:
	
	int speed;
	int gear;
	string color;

	void speedUp();
	void speedDown();
	void show();
	int getSpeed();
	void setSpeed(int s);
	int getGear();
	void setGear(int g);
	string getColor();
	void setColor(string c);
	const int MAX_SPEED;
	car();
	~car();
};


