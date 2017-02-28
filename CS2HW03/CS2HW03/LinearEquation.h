#include <iostream>
using namespace std;
/*
EQUATIONS

ax + by = e = ax1 + by1
cx + dy = f = cx3 + dy3

a = y1-y2
b = x1-x2
c = y3-y4
d = x3 - x4

x = (ed - bf)/(ad - bc)
y = (af - ec)/(ad - bc)
*/

class LinearEquation {
private:
	double A, B, C, D, E, F;
public:
	//constructors
	LinearEquation() {
		A = B = C = D = E = F = 1;
	}
	LinearEquation(double a, double b, double c, double d, double e, double f) {
		A = a;
		B = b;
		C = c;
		D = d;
		E = e;
		F = f;
	}
	//accessors
	double getA() { return A; }
	double getB() { return B; }
	double getC() { return C; }
	double getD() { return D; }
	double getE() { return E; }
	double getF() { return F; }
	//setters
	void setA(double a) { A = a; }
	void setB(double b) { B = b; }
	void setC(double c) { C = c; }
	void setD(double d) { D = d; }
	void setE(double e) { E = e; }
	void setF(double f) { F = f; }

	bool isSolvable() {
		if ((A*D - B*C) == 0) { //parallel lines
			cout << "The equation has no solution. \n";
			return false;
		}
		else
			return true;
	}

	double getX() {
		double X = (E*D - B*F) / (A*D - B*C);
		return X;
	}
	double getY() {
		double Y = (A*F - E*C) / (A*D - B*C);
		return Y;
	}
};
/*
UML DIAGRAM
--------------------------
- double A, B, C, D, E, F
--------------------------
+ LinearEquation()
+ LinearEquation(double a, double b, double c, double d, double e, double f)
+ double getA(), getB(), getC(), getD(), getE(), getF()
+ void setA(double a), setB(double b), setC(double c), setD(double d), setE(double e), setF(double f)
+ bool isSolvable()
+ double getX(), getY()
*/