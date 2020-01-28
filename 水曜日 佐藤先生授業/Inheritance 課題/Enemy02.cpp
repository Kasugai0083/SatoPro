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
	strcpy_s(Pepshiman, sizeof(Pepshiman), "Enemy02 の 攻撃！\n");
}
void Enemy02::Idle() {
	strcpy_s(Pepshiman, sizeof(Pepshiman), "Enemy02 は わらっている…\n");
}

void Enemy02::Defend() {
	strcpy_s(Pepshiman, sizeof(Pepshiman), "Enemy02 は みをまもっている…\n");
}

void Enemy02::Skill() {
	strcpy_s(Pepshiman, sizeof(Pepshiman), "Enemy02 は ホイミを唱えた！\n");
}
