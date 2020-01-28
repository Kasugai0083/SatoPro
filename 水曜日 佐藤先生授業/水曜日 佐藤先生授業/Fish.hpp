#pragma once

#include "Food.hpp"

class Fish : public Food {

public:
	Fish() {};

	void Print() override {
	};

private:
	char sea[100];
};