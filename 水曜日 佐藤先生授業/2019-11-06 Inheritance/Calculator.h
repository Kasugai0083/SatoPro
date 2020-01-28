#pragma once

class Calculator
{
public:
	// ‹àŠz‚Ì‘«‚µZ

	static void SetTax(float tax_);

	static int AddPrice(int priceA_, int priceB_);

	static float CalcTotalPrice(int price_);

private:
	static float CalcTax(int price_);

	static float tax;		//Á”ïÅ

};

