#include "Rectangle.h"


Rectangle::Rectangle()
{
}


Rectangle::~Rectangle()
{
}

int main()
{
	Shape* s = new Rectangle;
	s->draw();
	delete s;

	Rectangle* r = new Rectangle;
	r->draw();
	delete r;
}