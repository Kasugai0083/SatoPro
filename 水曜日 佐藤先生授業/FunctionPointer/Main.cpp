
#include <iostream>

// 配列のサイズを取得
#define ARRAY_SIZE(array)(sizeof(array) / sizeof* (array))

////四則演算する関数
//int Add(int a, int b) { return a + b; }
//int Sub(int a, int b) { return a - b; }
//int Mul(int a, int b) { return a * b; }
//int Div(int a, int b) { return a / b; }


// int(*)(int a, int b) <= 関数ポインタの型
// 関数ポインタの型に、typedefでFpOp2という名前を付ける
// typedef int(*FpOp2)(int a, int b); 

//四則演算を行う関数をまとめた関数ポインタの配列
//FpOp2 fp[] = {
//	Add,Sub, Mul, Div
//};
//int(*fp[])(int a, int b) = {
//	Add,Sub,Mul,Div
//};

// 演算名
const char* const func_name[] =
{
	"Add","Sub","Mul","Div"
};

//計算機クラス
class Calculator {
public:
	Calculator() {
		m_a = 10;
		m_b = 8;
	}

	// 四則演算する4つの関数をstaticな関数として実装
	int Add() {return m_a + m_b; }
	int Sub() {return m_a - m_b; }
	int Div() {return m_a / m_b; }
	int Mul() {return m_a * m_b; }

	void Calculate();


	//typedef int (Calculator::*FpOp2)();
	typedef int (Calculator::*FpOp2)();
	static const FpOp2 fp[];
	//static int Add(int a, int b) {return a + b; }
	//static int Sub(int a, int b) {return a - b; }
	//static int Div(int a, int b) {return a / b; }
	//static int Mul(int a, int b) {return a * b; }

	//typedef int (*FpOp2)(int a, int b);
	//static const FpOp2 fp[];

private:
	// 引数a,bをstaticメンバ変数 m_a, m_b を宣言して置き換え

	int m_a, m_b;
	//static int m_a, m_b;
};

const Calculator::FpOp2 Calculator::fp[] = {
	&Calculator::Add, &Calculator::Sub, &Calculator::Mul, &Calculator::Div
};

void Calculator::Calculate(){
	const int array_size = ARRAY_SIZE(fp);

	for (int i = 0; i < array_size; i++) {
		const int result = (this->*fp[i])();
		std::cout << func_name[i] << ":" << result << std::endl;
	}
}

void main() {

	Calculator calc;

	calc.Calculate();
}

#if 0
// プロトタイプ宣言
int (*fp[4])(int a, int b);

char c, * p1 = &c, * p2 = &c;

std::cout << main << std::endl;
#endif
