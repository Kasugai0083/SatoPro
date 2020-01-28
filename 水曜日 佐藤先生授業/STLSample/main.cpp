
#include <vector>
#include <list>
#include <iostream>
#include <stack>
#include <queue>
#include <assert.h>

#define VECTOR_SAMPLE
//#define LIST_SAMPLE
//#define QUEUE_SAMPLE
//#define STACK_SAMPLE


//! assertを使用するために必要な記述
#if defined (_DEBUG)
	#define MODE_DEBUG
#else
	#define MODE_RELEASE
#endif

#if defined(MODE_DEBUG)
	#define MY_ASSERT(exp) assert(exp);
#else
	#define MY_ASSERT(exp);
#endif
//! assertを使用するために必要な記述


void main() {

	assert( 1 );	//これはOK
	//assert( 0 );	//これはNG

#if defined(VECTOR_SAMPLE)

	std::vector<int> nVec1{ 1, 2, 3, 4, 5, 6, 7 };

	std::vector<int> nVec2;
	
	// vectorが空かどうか調べる(true = 空っぽ, false = 空じゃない)
	if (nVec2.empty() == true) {
		std::cout << "nVec2は空っぽです" << std::endl;
	}

	nVec2.reserve(100);		//あらかじめ領域を確保する
	if (nVec2.empty() == false) {
		std::cout << "nVec2は空じゃないです" << std::endl;
	}

	nVec2.push_back(1);
	nVec2.push_back(2);
	nVec2.push_back(3);
	nVec2.push_back(4);
	nVec2.push_back(5);
	if (nVec2.empty() == false) {
		std::cout << "nVec2は空じゃないです" << std::endl;
	}


	nVec1.push_back(8);
	nVec1.push_back(9);
	nVec1.push_back(10);

	MY_ASSERT(nVec1.size() >= 20);

	std::cout << nVec1[0] << std::endl;
	std::cout << nVec1[9] << std::endl;

	std::cout << "nVec1.size() => " << nVec1.size() << std::endl;

	std::vector<int>::iterator itr_first = nVec1.begin();	//要素の先頭へのポインタを返す
	std::vector<int>::iterator itr_last = nVec1.end();	//要素の最後へのポインタを返す


	//for (int i = 0; i < nVec1.size(); i++) {	//通常、for文で回そうとする場合
	//for (std::vector<int>::iterator i = itr_first; i != itr_last; ++i) {
	//	std::cout << *i << std::endl;
	//}

	std::cout << std::endl;
	std::cout << "範囲for文" << std::endl;
	for (const int& val : nVec1) {
		std::cout << val << std::endl;
	}

	int nArray[] = { 0,1,2,3,4,5 };
	int* nArray2 = new int[10];

	std::cout << std::endl;
	std::cout << "範囲for文" << std::endl;
	for (const int& val : nVec1) {
		std::cout << val << std::endl;
	}

#elif defined(QUEUE_SAMPLE)
	//Queue
	std::queue<int> nQueue;
	nQueue.push(0);
	nQueue.push(1);
	nQueue.push(2);
	nQueue.push(3);

	// nQueueの中身が空になるまで繰り返す
	std::cout << "Queueの出力" << std::endl;
	while (!nQueue.empty()) {
		std::cout << nQueue.front() << std::endl;	//先頭の値を出力
		nQueue.pop();								//先頭の値を削除
	}

	std::cout << std::endl;

#elif defined(STACK_SAMPLE)
	// Stack
	std::stack<int> nStack;
	nStack.push(0);
	nStack.push(1);
	nStack.push(2);
	nStack.push(3);

	// nStackの中身が空になるまで繰り返す
	std::cout << "Stackの出力" << std::endl;
	while (!nStack.empty()) {
		std::cout << nStack.top() << std::endl;		//末尾の値を出力
		nStack.pop();								//末尾の値を削除
	}

#elif defined(LIST_SAMPLE)

	//List
	std::list<int> nList;

	nList.push_back(0);
	nList.push_back(1);
	nList.push_back(2);
	nList.push_back(3);
	nList.push_front(4);

	std::list<int>::iterator itr_next = nList.begin();
	itr_next = itr_next++;
	itr_next = itr_next++;

	// std::next(itr, n); itr から n 回進んだ先のイテレーターを返す
	//std::list<int>::iterator itr_next = std::next(nList.begin(), 2);

	nList.insert(itr_next, 5);

	std::list<int>::iterator itr_first = nList.begin();
	std::list<int>::iterator itr_last = nList.end();


	for (std::list<int>::iterator i = itr_first; i != itr_last; i++) {
		std::cout << *i << std::endl;
	}

#endif

}

//template<class T>
//class Foo {
//public:
//	static T val;
//};
//
//template<class T>
//T Foo<T>::val = 0;