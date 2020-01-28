#include "Rectangle.h"
#include <iostream>
#include "Calclate.h"

#if 0
int GetMax(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}

double GetMax(double a, double b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}
#endif

void main() {
	//Calclate<int> calc;

	int n1 = 100, n2 = 101;
	int nRet = GetMax(n1, n2);

	double d1 = 100.54, d2 = 100.954;

	double dRet = GetMax(d1, d2);

	double dRes = GetMin(d1, d2);

	double dAdd = Add(d1, d2);

	Rectangle<int> nRect(50, 50, 100, 100);
	Rectangle<double> dRect(50.5, 50.1, 100.557, 100.1287);

	Swap(n1, n2);

	std::cout << "nRect::GetTop() => " << nRect.GetTop() << std::endl;
	std::cout << "nRect::GetBottom() => " << nRect.GetBottom() << std::endl;
	std::cout <<  n1 << std::endl;

}