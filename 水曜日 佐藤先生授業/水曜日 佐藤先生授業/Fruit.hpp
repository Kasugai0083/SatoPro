#pragma once

#include "Food.hpp"

class Fruit : public Food {
public:
	void SetFarmName(const char* name_);
	const char* GetFarmName()const;
	
	void PrintInformation()const;

private:
	char farm_name[100];
};