#include<iostream>
using namespace std;


struct Point {

	int xpos;
	int ypos;

};

Point& PntAdder(const Point& p1, const Point& p2) {
	Point* res = new Point;

	res->xpos = p1.xpos+ p2.xpos;
	res->ypos = p1.ypos+p2.ypos;


	return *res;
}

int main() {
	Point* p1 = new Point{ 1,2 };
	Point* p2 = new Point{ 2,8 };

	Point p3 = PntAdder(*p1,*p2  );

	cout << "PntAdder(*p1, *p2)" << endl;
	cout << p3.xpos << ", " << p3.ypos << endl;

	delete p1;
	delete p2;

	return 0;
}