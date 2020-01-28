
#include <string>
#include "Fruit.hpp"
#include "Food.hpp"
#include <iostream>

int Fruit::GetPricce() {
	return m_Price;
}

void Fruit::SetProductName(const char* name_) {
	strcpy_s(m_ProductName, sizeof(m_ProductName), name_);

}

void Fruit::SetPrice(int price_) {
	Food::SetPrice(price_ + 50);
}




