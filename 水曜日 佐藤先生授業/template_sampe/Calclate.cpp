#include "Calclate.h"

//Calclate::Calclate()
//{
//}
//
//
//Calclate::~Calclate()
//{
//}
template void Swap(int& a, int& b);
template void Swap(double& a, double& b);

template<class T>
void Swap(T& a, T& b) {
	T buf = a;
	a = b;
	b = buf;
}