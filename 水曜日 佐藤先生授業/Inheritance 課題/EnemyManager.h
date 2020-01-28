#pragma once
#include "Definition.h"
#include "EnemyBase.h"
#include "Enemy00.h"
#include "Enemy02.h"


class EnemyManager 
{
public:
	EnemyManager();
	~EnemyManager();

	void Update();
	void Draw();

	bool CreateEnemy(EnemyType type);

	int GetEnemyNum() const;
	int GetEnemyNum( EnemyType type )const;

private:
	EnemyBase* m_enemys[ENEMY_MAX];
};

