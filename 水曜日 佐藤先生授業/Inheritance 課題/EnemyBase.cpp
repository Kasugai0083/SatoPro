#include "EnemyBase.h"
#include <iostream>

EnemyBase::EnemyBase()
{
}


EnemyBase::~EnemyBase()
{
}

EnemyType EnemyBase::GetType()
{
	return m_Type;
}


void EnemyBase::Update() {

	switch (m_Action)
	{
	case Action_Idle:
		Idle();
		break;
	case Action_Attack:
		Attack();
		break;
	case Action_Defend:
		Defend();
		break;
	case Action_Skill:
		Skill();
		break;
	default:
		break;
	}


}

void EnemyBase::Draw() {
	std::cout << Pepshiman << std::endl;
}
