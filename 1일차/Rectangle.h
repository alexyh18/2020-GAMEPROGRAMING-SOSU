#pragma once
#include "Shape.h"
class Rectangle
{
private:
	int Width;
	int Height;
public:
	void setWidth(int w)
	{
		Width = w;
	}
	void setHeight(int h)
	{
		Height = h;
	}
	void draw()
	{
		cout << "靛肺快绢录备历录备" << endl;
	}
	Rectangle();
	~Rectangle();
};

class Rectangle :
	public Shape
{
};

