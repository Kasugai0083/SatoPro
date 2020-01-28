#pragma once


/**
* @brief 二点間の座標を保存するクラス\n
* クラス同士の四則演算可能
*/
class Vector2 {
public:
	//! 引数なしの場合 (0,0) で初期化
	Vector2();

	/**
	* @brief コンストラクタで値を設定
	* @param[in] x_ X座標を引数の値で初期化
	* @param[in] y_ Y座標を引数の値で初期化
	*/
	Vector2(float x_, float y_);
	~Vector2();
	
	//ベクトルの斜辺の長さが返る
	float Length() const;

	//! ベクトルの正規化(単位ベクトル)
	void Normalize();

	//! + 演算子のオーバーロード
	Vector2 operator + (const Vector2& rhs_) const;
	//! - 演算子のオーバーロード
	Vector2 operator - (const Vector2& rhs_) const;
	//! * 演算子のオーバーロード
	Vector2 operator * (const Vector2& rhs_) const;
	Vector2 operator * (float f_)const;
	//! / 演算子のオーバーロード
	Vector2 operator / (const Vector2& rhs_) const;
	Vector2 operator / (float f_) const;

	Vector2& operator = (const Vector2& rhs_);

	//! + 演算子のオーバーロード
	Vector2& operator += (const Vector2& rhs_);
	//! - 演算子のオーバーロード
	Vector2& operator -= (const Vector2& rhs_);
	//! * 演算子のオーバーロード
	Vector2& operator *= (const Vector2& rhs_);
	Vector2& operator *= (float f_);
	//! / 演算子のオーバーロード
	Vector2& operator /= (const Vector2& rhs_);
	Vector2& operator /= (float f_);

	//! 符号反転 単項演算子のオーバーロード
	Vector2 operator - () const;

	//! < 演算子のオーバーロード
	bool operator < (const Vector2& rhs_)const;
	bool operator > (const Vector2& rhs_)const;
	bool operator <= (const Vector2& rhs_)const;
	bool operator >= (const Vector2& rhs_)const;

public:
	//! 座標を保存する変数
	float X, Y;
};