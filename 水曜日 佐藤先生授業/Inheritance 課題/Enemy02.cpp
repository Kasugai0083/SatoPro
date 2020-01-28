#include "Enemy02.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

Enemy02::Enemy02()
{
	Object::Init();
	Init();
}


Enemy02::~Enemy02()
{
}

void Enemy02::Init() {
	m_Type = EnemyType_00;
	//m_Action = Action_Idle;

	int tmp = rand() % Action_Max;

	m_Action = (Action)tmp;

	m_hp = 100;
	m_active = 2;
}

int Enemy02::GetActive() {
	return m_active;
}

void Enemy02::Attack() {
	strcpy_s(Pepshiman, sizeof(Pepshiman), "Enemy02 �� �U���I\n");
}
void Enemy02::Idle() {
	strcpy_s(Pepshiman, sizeof(Pepshiman), "Enemy02 �� �����Ă���c\n");
}

void Enemy02::Defend() {
	strcpy_s(Pepshiman, sizeof(Pepshiman), "Enemy02 �� �݂��܂����Ă���c\n");
}

void Enemy02::Skill() {
	strcpy_s(Pepshiman, sizeof(Pepshiman), "Enemy02 �� �z�C�~���������I\n");
}
