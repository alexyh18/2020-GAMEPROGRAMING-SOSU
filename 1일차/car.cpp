#include "car.h"

void car::speedUp()
{
	speed += 10;
}
void car::speedDown()
{
	speed -= 10;
}
void car::show()
{
	cout << "===============" << endl;
	cout << "�ӵ� : " << speed << endl;
	cout << "��� : " << gear << endl;
	cout << "���� : " << color << endl;
	cout << "===============" << endl;
}
int car::getSpeed()
{
	return speed;
}
void car::setSpeed(int s)
{
	speed = s;
}
int car::getGear()
{
	return gear;
}
void car::setGear(int g)
{
	gear = g;
}
string car::getColor()
{
	return color;
}
void car::setColor(string c)
{
	color = c;
}

car::car():MAX_SPEED(200)
{
	cout << "����Ʈ ������ ȣ��" << endl;
	speed = 0;
	gear = 1;
	color = "white";
}


car::~car()
{
	cout << "�Ҹ��� ȣ��" << endl;
}
