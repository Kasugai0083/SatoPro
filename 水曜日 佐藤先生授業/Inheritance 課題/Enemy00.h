#pragma once

#include "EnemyBase.h"

class Enemy00 :
	public EnemyBase
{
public:
	Enemy00();
	~Enemy00();

	virtual void Init()override;

	int GetActive()override;

	virtual void Attack()override;
	virtual void Defend()override;
	virtual void Skill()override;
	virtual void Idle()override;
};

