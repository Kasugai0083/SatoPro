#include "Food.hpp"
#include <iostream>

//Ã“Iƒƒ“ƒo•Ï”‚Ì‰Šú‰»
int Food::total_num = 0;


Food::Food() :
	limitDate(2019, 11, 20),
	m_Price(0),
	m_ProductName("hoge")
{
	total_num++;
}

Food::~Food() {
	total_num--;
}

void Food::SetPrice(int price_){
	m_Price = price_;
}

void Food::PrintInformation() {
	std::cout << "price => " << GetPricce() << std::endl;
	std::cout << "product_name=> " << m_ProductName << std::endl;
}
