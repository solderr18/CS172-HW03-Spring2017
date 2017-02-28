#include <iostream>
using namespace std;

class MyInteger {
private:
	int Value;
public:
	//constructors
	MyInteger() {
		Value = 1;
	}
	MyInteger(int val) {
		Value = val;
	}
	//get function
	const int getValue() { return Value; } //just retrieving value, not changing -> const
	//const bool fxns (looks inside class)
	const bool isEven() {
		if (Value % 2 == 0)
			return true;
		else
			return false;
	}
	const bool isOdd() {
		if (Value % 2 != 0)
			return true;
		else
			return false;
	}
	const bool isPrime() { 
		bool prime = true;
		for (int n = 0; n <= (Value / 2); n++) {
			if (Value % n == 0)
				prime = false;
		}
		return prime;
	}
	//static bool fxns (looks inside object)
	static bool isEven(int val) { 
		if (val % 2 == 0)
			return true;
		else
			return false;
	}
	static bool isOdd(int val) { //static related to class. others related to object
		if (val % 2 != 0)
			return true;
		else
			return false;
	}
	static bool isPrime(int val) {
		bool prime = true;
		for (int n = 0; n <= (val / 2); n++) {
			if (val % n == 0)
				prime = false;
		}
		return prime;
	}
	//static bool fxns using object pass by reference
	static bool isEven(const MyInteger& i) { 
		if (i.Value % 2 == 0)
			return true;
		else
			return false;
	}
	static bool isOdd(const MyInteger& i) {
		if (i.Value % 2 != 0)
			return true;
		else
			return false;
	}
	static bool isPrime(const MyInteger& i) {
		bool prime = true;
		for (int n = 0; n <= (i.Value / 2); n++) {
			if (i.Value % n == 0)
				prime = false;
		}
		return prime;
	}
	//const bool fxns checking equality
	const bool equals (int val) {
		if (Value == val)
			return true;
		else
			return false;
	}
	const bool equals(const MyInteger& i) {
		if (Value == i.Value)
			return true;
		else
			return false;
	}
	//static fxn looking inside string object pass by reference
	static int parseInt(const string& s) {
		int num = 0;
		for (int i = 0; i < s.length(); i++) {
			num += s[i] - 48;
			num *= 10;
		}
	}
};
/*
UML DIAGRAM - MyInteger
------------------
- int Value

+ MyInteger()
+ MyInteger(int val)

+ const bool isEven(), isOdd(), isPrime()
+ static bool isEven(int ), isOdd(int ), isPrime(int )
+ static bool isEven(const MyInteger& ), isOdd(const MyInteger& ), isPrime(const MyInteger& )
+ const bool equals(int ), equals(const MyInteger& )
+ static int parseInt(const string& )
------------------
*/