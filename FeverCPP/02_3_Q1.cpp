#include <iostream>

using namespace std;

typedef struct __Point
{
	int xpos;
	int ypos;
}Point;

Point& PntAdder(const Point& p1, const Point& p2)
{
	Point *pos = new Point;

	pos->xpos = p1.xpos + p2.xpos;
	pos->ypos = p1.ypos + p2.ypos;

	return *pos;
}

int main()
{

	Point* p1 = new Point;
	p1->xpos = 3;
	p1->ypos = 30;

	Point* p2 = new Point;
	p2->xpos = 10;
	p2->ypos = 110;

	Point& pref = PntAdder(*p1, *p2);
	cout << "(" << pref.xpos << ", " << pref.ypos << ")" << endl;

	return 0;
}