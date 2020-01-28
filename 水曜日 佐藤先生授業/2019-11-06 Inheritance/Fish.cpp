
#include <string>
#include "Fish.hpp"
#include "Food.hpp"
#include <iostream>

int Fish::GetPricce() {
	return m_Price;
}

void Fish::SetProductName(const char* name_) {
	strcpy_s(m_ProductName, sizeof(m_ProductName), name_);
}

void Fish::SetPrice(int price_) {
	Food::SetPrice(price_ + 50);
}



