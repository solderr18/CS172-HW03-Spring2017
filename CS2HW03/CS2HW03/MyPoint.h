#ifndef MYPOINT_H_
#define MYPOINT_H_

#include <iostream>
using namespace std;
//EX03_01 Ex 9.4: the Point class
class MyPoint {
private:
	double X, Y;
public:
	MyPoint() {
		X = 0;
		Y = 0;
	}
	MyPoint(int selectX, int selectY) {
		X = selectX;
		Y = selectY;
	}
	double getX() { return X; }
	double getY() { return Y; }
	void setX(int someX) {
		X = someX;
	}
	void setY(int someY) {
		Y = someY;
	}
	double Distance(MyPoint &b) {
		double distance = sqrt((getX() - b.getX())*(getX() - b.getX()) + (getY() - b.getY())*(getY() - b.getY()));
		return distance;
	}
/*	static double Distance(MyPoint p1, MyPoint p2) {
		double distance = sqrt((p1.getX() - p2.getX())*(p1.getX() - (p2.getX()) + (p1.getY() - p2.getY())*(p1.getY() - p2.getY())));
	} */
};
/*
UML DIAGRAM
----------
- double X, Y
+ MyPoint()
+ MyPoint(int x, int y)
+ double getX(), getY()
+ void setX(int x), setY(int y)
+ double Distance (MyPoint &test)
*/

#endif //MYPOINT_H_