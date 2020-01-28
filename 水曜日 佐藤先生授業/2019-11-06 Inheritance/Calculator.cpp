#include "Calculator.h"

float Calculator::tax = 0.08f;

void Calculator::SetTax(float tax_) {

	//静的ではないメンバ変数には接続できない
	//m_Price = 100;

	//静的ではないメソッドには接続できない
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
