#include"car.h"
#include<time.h>

int main()
{
	srand((unsigned int)time(NULL));
	int i = 0;
	bool isgoal = false, whowin = false;
	car mycar;
	car *yourcar = new car;

	mycar.speed = 100;
	yourcar->speed = 100;
	mycar.gear = 1;
	yourcar->gear = 1;
	mycar.color = "white";
	yourcar->color = "blue";

	while (!isgoal)
	{
		int car1 = rand() % 100 + 1;
		int car2 = rand() % 100 + 1;

		if (car1 > car2)
		{
			mycar.speedUp();
			yourcar->speedDown();
		}
		else
		{
			mycar.speedDown();
			yourcar->speedUp();
		}

		if (mycar.speed == 70)
		{
			isgoal = true;
			whowin = false;
		}
		else if (yourcar->speed == 70)
		{
			isgoal = true;
			whowin = true;
		}
		mycar.show();
		yourcar->show();
		i++;
	}
	if (whowin)
	{
		cout << "yourcar win!" << i << "km 주행"<<endl;
	}
	else
	{
		cout << "mycar win!" << i << "km 주행"<<endl;
	}
	delete yourcar;
	
}
	//Rectangle rect;
	//rect.setWidth(3);
	//rect.setHeight(5);
	//cout << "사각형의 면적은" << rect.getArea() << endl;
