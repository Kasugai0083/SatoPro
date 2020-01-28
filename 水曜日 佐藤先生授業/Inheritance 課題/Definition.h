#pragma once

const int ENEMY_MAX = 100;

enum EnemyType {
	EnemyType_00,
	EnemyType_02,

	EnemyType_Max,
};

enum Action {
	Action_Idle,
	Action_Attack,
	Action_Defend,
	Action_Skill,

	Action_Max,
};

struct Position {
	float x;
	float y;
};