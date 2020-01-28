#ifndef FOOD_H_
#define FOOD_H_

#define IS_CHRISTMAS
#define BETA_PRESEN

#include <string>

#include "Date.h"

class Food {
public:
#pragma region コンストラクタセクション
	Food();
	virtual ~Food();
#pragma endregion

#pragma region セッター
	virtual void SetPrice(int price_);
	virtual void SetProductName(const char* name_) = 0;
#pragma endregion

#pragma region ゲッター
	virtual int GetPricce() = 0;
#pragma endregion

#pragma region 出力セクション
	virtual void PrintInformation();
#pragma endregion

#if defined(IS_CHRISTMAS)
	int GetSpecialPrice()const { return m_Price * 0.1f; };
#endif

#if defined(BETA_PRESEN)
	int GetAtkDamage() const { return 0; }
#else
	int GetAtkDamage() const { return 10; }
#endif

#pragma region argmentセクション
protected:
	Date limitDate;
	int m_Price;
	char m_ProductName[100];

protected:
	static int total_num;	//総数

#pragma endregion

};

#endif