#include <iostream>
#include "Food.hpp"

#include "Fruit.hpp"
#include "Fish.hpp"
#include "Calculator.h"

char name[] = "�O���[�o����Naomichi����";

class Preson {
public:
	static char name[100];
};
char Preson::name[] = "0";

int main() {

	int Num[4] = { 0, 1 };

	//[2], [3] �͈����Ȃ��̃R���X�g���N�^���Ăяo�����
	Date myDate[4] = { Date(2019,11,20), Date(2019,11,27) };

#if 0
	//�ÓI�Ȋ֐��̌Ăяo����
	Calculator::SetTax(1.f);

	Fruit myFruit;
	Fish myFish;

	myFruit.SetProductName("���R�q��");
	myFish.SetProductName("�X�g�[���I�[�V����");


	Food* pFood[] = {
		&myFruit,
		&myFish
	};

	for (int i = 0; i < 2; i++) {
		pFood[i]->SetPrice(300);
		pFood[i]->PrintInformation();
	}


	int price = Calculator::CalcTotalPrice(myFruit.GetPricce);

#pragma region �Â���
	////myFruit.SetPrice(3000);
	//pFood->SetPrice(3000);

	//myFruit.PrintInformation();

	//std::cout << pFood->GetPricce() << std::endl;


	//std::cout << "price => " << myFruit.GetPricce() << std::endl;
	//std::cout << "farm name => " << myFruit.GetFarmName() << std::endl;

	//char name[] = "���[�J����Naomichi����";

	//Preson psn;
	//strcpy_s(Preson::name, sizeof(Preson::name), "�N���X��Naomichi����");

	//std::cout << name << std::endl;
	//std::cout << ::name << std::endl;
	//std::cout << Preson::name << std::endl;

	//int num;
	//char tmp[256];

	//std::cout << "��������͂��Ă�������" << std::endl;
	//std::cin >> num;
	//std::cout << "���͂���������" << num << "�ł�" << std::endl;

	//std::cout << "���O����͂��Ă�������" << std::endl;
	//std::cin.getline(tmp, sizeof(tmp));
	//std::cout << "���͂������O��" << tmp << "�ł�" << std::endl;

	//std::cout << "Hello\nWorld\n";

	//float fPI = 3.14f;
	//int nPI = 3;
	//std::cout << "PI = " << nPI << " or " << fPI << "?" << std::endl;

	//std::cout.width(4);
	//std::cout << 25 << std::endl;

	//std::cout.width(4);
	//std::cout.fill('0');
	//std::cout << 25 << std::endl;


	//std::cout.fill(' ');
	//std::cout.width(6);
	//std::cout.precision(4);
	//std::cout << 155.32f << std::endl;
#pragma endregion

#endif

	return 0;
}