#pragma once

#include "Food.hpp"

class Fish : public Food {
public:

	virtual void SetProductName(const char* name_) override;
	virtual int GetPricce() override;

	void SetPrice(int price_)override;

private:


};