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
	cout << "속도 : " << speed << endl;
	cout << "기어 : " << gear << endl;
	cout << "색상 : " << color << endl;
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
	cout << "디폴트 생성자 호출" << endl;
	speed = 0;
	gear = 1;
	color = "white";
}


car::~car()
{
	cout << "소멸자 호출" << endl;
}
