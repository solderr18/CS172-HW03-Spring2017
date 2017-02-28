#include <iostream>

#include <string>
#include "MyPoint.h" //9.4
#include "LinearEquation.h"
#include "MyInteger.h"
using namespace std;

void sort(string& s); //10.4

int main() {
	//9.4
	MyPoint p1, ps(10, 30.5);
	cout << "Distance between test points is " << p1.Distance(ps) << endl;

//	MyPoint::Distance(p1, ps);
	
	//9.9
	double _a, _b, _c, _d, _e, _f, _x, _y;
	cout << "enter values for a, b, c, d, e & f" << endl;
	cin >> _a >> _b >> _c >> _d >> _e >> _f;
	LinearEquation test(_a, _b, _c, _d, _e, _f);
	if (test.isSolvable()) {
		_x = test.getX();
		_y = test.getY();
	}

	//9.10
	LinearEquation LA1, LA2, LA3, LA4; 

	double x1, x2, x3, x4, y1, y2, y3, y4;
	cout << "x1: ";
	cin >> x1;
	cout << "y1: ";
	cin >> y1;
	cout << "x2: ";
	cin >> x2;
	cout << "y2: ";
	cin >> y2;
	cout << "x3: ";
	cin >> x3;
	cout << "y3: ";
	cin >> y3;
	cout << "x4: ";
	cin >> x4;
	cout << "y4: ";
	cin >> y4;

	double a = y1 - y2;
	double b = x1 - x2;
	double c = y3 - y4;
	double d = x3 - x4;
	double e = a*x1 + b*y1;
	double f = c*x3 + d*y3;


	//10.4
	string stringTest;
	cout << "Enter a string s: ";
	cin >> stringTest;
	sort(stringTest);
	cout << stringTest;

	/* test
	MyInteger s(10);
	MyInteger i(5);
	s.equals(i);

	MyInteger::isEven(5);
	*/
	return 0;
}
//10.4
void sort(string &s) {
	for (int i = 0; i < s.size(); i++) {
		for (int j = 0; j = i; j++) {
			if (s[j]<s[i]) {
				char placeHolder = s[j];
				s[j] = s[i];
				s[i] = placeHolder;
			}
		}

	}

}