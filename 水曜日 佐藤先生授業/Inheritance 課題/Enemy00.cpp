#include "Enemy00.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

Enemy00::Enemy00()
{
	Object::Init();
	Init();
}


Enemy00::~Enemy00()
{
}

void Enemy00::Init() {
	m_Type = EnemyType_00;
	//m_Action = Action_Idle;

	int tmp = rand() % Action_Max;

	m_Action = (Action)tmp;

	m_hp = 100;
	m_active = 1;
}

int Enemy00::GetActive() {
	return m_active;
}

void Enemy00::Attack() {
	strcpy_s(Pepshiman, sizeof(Pepshiman), "Enemy00 の 攻撃！\n");
}
void Enemy00::Idle() {
	strcpy_s(Pepshiman, sizeof(Pepshiman), "Enemy00 は ようすをみている\n");
}

void Enemy00::Defend() {
	strcpy_s(Pepshiman, sizeof(Pepshiman), "Enemy00 は みをまもっている…\n");
}

void Enemy00::Skill() {
	strcpy_s(Pepshiman, sizeof(Pepshiman), "Enemy00 は 火を放った！\n");
}
