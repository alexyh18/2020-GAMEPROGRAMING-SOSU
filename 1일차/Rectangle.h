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
		cout << "��ο��¼����¼��" << endl;
	}
	Rectangle();
	~Rectangle();
};

class Rectangle :
	public Shape
{
};

