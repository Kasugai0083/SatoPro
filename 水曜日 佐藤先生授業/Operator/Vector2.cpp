#include "Vector2.h"
#include <cmath>

Vector2::Vector2() {
	X = 0;
	Y = 0;
}

Vector2::Vector2(float x_, float y_) {

	X = x_;
	Y = y_;

}

Vector2::~Vector2() {

}

float Vector2::Length()const {
	return std::sqrt((X * X) + (Y * Y));
}

void Vector2::Normalize() {
	float len = Length();
	if (len < 0.f) {
		len = 0.f;
	}
	else {
		len = 1.f / len;
	}
	X *= len;
	Y *= len;
}

Vector2 Vector2::operator + (const Vector2& rhs_) const {
	Vector2 val;

	val.X = this->X + rhs_.X;
	val.Y = this->Y + rhs_.Y;

	return val;
}
Vector2 Vector2::operator - (const Vector2& rhs_) const {
	Vector2 val;

	val.X = this->X - rhs_.X;
	val.Y = this->Y - rhs_.Y;

	return val;
}
Vector2 Vector2::operator * (const Vector2& rhs_) const {
	Vector2 val;

	val.X = this->X * rhs_.X;
	val.Y = this->Y * rhs_.Y;

	return val;
}
Vector2 Vector2::operator * (float f_)const {
	Vector2 val;

	val.X = this->X * f_;
	val.Y = this->Y * f_;

	return val;
}
Vector2 Vector2::operator / (const Vector2& rhs_)const {
	Vector2 val;

	val.X = this->X / rhs_.X;
	val.Y = this->Y / rhs_.Y;

	return val;
}
Vector2 Vector2::operator / (float f_)const {
	Vector2 val;

	val.X = this->X / f_;
	val.Y = this->Y / f_;

	return val;
}

Vector2& Vector2::operator = (const Vector2& rhs_) {

	// ‰E•Ó’l‚ªŽ©•ªŽ©g‚¾‚Á‚½‚ç‰½‚à‚µ‚È‚¢
	if (this == &rhs_) {
		return *this;
	}
	
	this->X = rhs_.X;
	this->Y = rhs_.Y;

	return *this;

}
Vector2& Vector2::operator += (const Vector2& rhs_) {
	
	this->X += rhs_.X;
	this->Y += rhs_.Y;

	return *this;
}
Vector2& Vector2::operator -= (const Vector2& rhs_) {
	
	this->X -= rhs_.X;
	this->Y -= rhs_.Y;

	return *this;
}
Vector2& Vector2::operator *= (const Vector2& rhs_) {
	
	this->X *= rhs_.X;
	this->Y *= rhs_.Y;

	return *this;
}
Vector2& Vector2::operator *= (float f_) {
	
	this->X *= f_;
	this->Y *= f_;

	return *this;
}
Vector2& Vector2::operator /= (const Vector2& rhs_) {
	
	this->X /= rhs_.X;
	this->Y /= rhs_.Y;

	return *this;
}
Vector2& Vector2::operator /= (float f_) {
	
	this->X /= f_;
	this->Y /= f_;

	return *this;
}

Vector2 Vector2::operator - () const{

	Vector2 val;
	val.X = -this->X;
	val.Y = -this->Y;

	return val;
}
bool Vector2::operator < (const Vector2& rhs_) const{
	return Length() < rhs_.Length();
}
bool Vector2::operator > (const Vector2& rhs_) const{
	return Length() > rhs_.Length();
}
bool Vector2::operator <= (const Vector2& rhs_) const{
	return Length() <= rhs_.Length();
}
bool Vector2::operator >= (const Vector2& rhs_) const{
	return Length() >= rhs_.Length();
}
