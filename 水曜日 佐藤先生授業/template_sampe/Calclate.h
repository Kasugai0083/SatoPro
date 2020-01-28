#pragma once
//class Calclate
//{
//public:
//	Calclate();
//	~Calclate();
//
//	template<class T>
//	T GetMax(T a, T b);
//
//	template<class T>
//	T GetMin(T a, T b);
//
//	template<class T>
//	T Add(T a, T b);
//
//	template<class T>
//	void Swap(T& a, T& b);
//};

template <class T>
void Swap(T& a, T& b);


template<class T>
T GetMax(T a, T b) {
	T buf;
	if (a > b) { buf = a; }
	else { buf = b; }
	return buf;
}

template<class T>
T GetMin(T a, T b) {
	T buf;
	if (a < b) { buf = a; }
	else { buf = b; }
	return buf;
}

template<class T>
T Add(T a, T b) {
	T buf;
	return a + b;
}