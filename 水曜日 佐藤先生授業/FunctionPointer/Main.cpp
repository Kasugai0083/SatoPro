
#include <iostream>

// �z��̃T�C�Y���擾
#define ARRAY_SIZE(array)(sizeof(array) / sizeof* (array))

////�l�����Z����֐�
//int Add(int a, int b) { return a + b; }
//int Sub(int a, int b) { return a - b; }
//int Mul(int a, int b) { return a * b; }
//int Div(int a, int b) { return a / b; }


// int(*)(int a, int b) <= �֐��|�C���^�̌^
// �֐��|�C���^�̌^�ɁAtypedef��FpOp2�Ƃ������O��t����
// typedef int(*FpOp2)(int a, int b); 

//�l�����Z���s���֐����܂Ƃ߂��֐��|�C���^�̔z��
//FpOp2 fp[] = {
//	Add,Sub, Mul, Div
//};
//int(*fp[])(int a, int b) = {
//	Add,Sub,Mul,Div
//};

// ���Z��
const char* const func_name[] =
{
	"Add","Sub","Mul","Div"
};

//�v�Z�@�N���X
class Calculator {
public:
	Calculator() {
		m_a = 10;
		m_b = 8;
	}

	// �l�����Z����4�̊֐���static�Ȋ֐��Ƃ��Ď���
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
	// ����a,b��static�����o�ϐ� m_a, m_b ��錾���Ēu������

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
// �v���g�^�C�v�錾
int (*fp[4])(int a, int b);

char c, * p1 = &c, * p2 = &c;

std::cout << main << std::endl;
#endif
