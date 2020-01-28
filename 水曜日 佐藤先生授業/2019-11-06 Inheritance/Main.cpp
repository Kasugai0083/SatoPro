#include <iostream>
#include "Food.hpp"

#include "Fruit.hpp"
#include "Fish.hpp"
#include "Calculator.h"

char name[] = "グローバルなNaomichiさん";

class Preson {
public:
	static char name[100];
};
char Preson::name[] = "0";

int main() {

	int Num[4] = { 0, 1 };

	//[2], [3] は引数なしのコンストラクタが呼び出される
	Date myDate[4] = { Date(2019,11,20), Date(2019,11,27) };

#if 0
	//静的な関数の呼び出し例
	Calculator::SetTax(1.f);

	Fruit myFruit;
	Fish myFish;

	myFruit.SetProductName("畠山牧場");
	myFish.SetProductName("ストーンオーシャン");


	Food* pFood[] = {
		&myFruit,
		&myFish
	};

	for (int i = 0; i < 2; i++) {
		pFood[i]->SetPrice(300);
		pFood[i]->PrintInformation();
	}


	int price = Calculator::CalcTotalPrice(myFruit.GetPricce);

#pragma region 古いの
	////myFruit.SetPrice(3000);
	//pFood->SetPrice(3000);

	//myFruit.PrintInformation();

	//std::cout << pFood->GetPricce() << std::endl;


	//std::cout << "price => " << myFruit.GetPricce() << std::endl;
	//std::cout << "farm name => " << myFruit.GetFarmName() << std::endl;

	//char name[] = "ローカルなNaomichiさん";

	//Preson psn;
	//strcpy_s(Preson::name, sizeof(Preson::name), "クラスなNaomichiさん");

	//std::cout << name << std::endl;
	//std::cout << ::name << std::endl;
	//std::cout << Preson::name << std::endl;

	//int num;
	//char tmp[256];

	//std::cout << "数字を入力してください" << std::endl;
	//std::cin >> num;
	//std::cout << "入力した数字は" << num << "です" << std::endl;

	//std::cout << "名前を入力してください" << std::endl;
	//std::cin.getline(tmp, sizeof(tmp));
	//std::cout << "入力した名前は" << tmp << "です" << std::endl;

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