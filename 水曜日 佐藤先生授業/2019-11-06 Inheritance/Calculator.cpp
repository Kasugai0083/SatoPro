#include "Calculator.h"

float Calculator::tax = 0.08f;

void Calculator::SetTax(float tax_) {

	//�ÓI�ł͂Ȃ������o�ϐ��ɂ͐ڑ��ł��Ȃ�
	//m_Price = 100;

	//�ÓI�ł͂Ȃ����\�b�h�ɂ͐ڑ��ł��Ȃ�
	//SetPrice(100);

	tax = tax_;

}

int Calculator::AddPrice(int priceA_, int priceB_) {
	return priceA_ + priceB_;
}

float Calculator::CalcTax(int price_) {
	return (price_ * tax);
}

float Calculator::CalcTotalPrice(int price_) {
	return AddPrice(price_, CalcTax(price_));
}
