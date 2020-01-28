#include "Object.hpp"

Object::Object()
{
	Init();
}


Object::~Object()
{
}

void Object::Init() {
	SetPos(0, 0);
}

void Object::SetPos(float x_, float y_) {
	m_Pos.x = x_;
	m_Pos.y = y_;
}

void Object::SetPos(const Position &pos_) {
	m_Pos = pos_;
}

const Position& Object::GetPos() const{
	return m_Pos;
}