
#include <string>
#include "Fruit.hpp"
#include "Food.hpp"
#include <iostream>

void Fruit::SetFarmName(const char* name_) {
	strcpy_s(farm_name, sizeof(farm_name), name_);
}

const char* Fruit::GetFarmName()const {
	return farm_name;
}

void Fruit::PrintInformation()const {
	std::cout << "price => " << GetPricce() << std::endl;
	std::cout << "farm name => " << GetFarmName() << std::endl;
}
