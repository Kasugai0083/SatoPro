#pragma once
#include "EnemyBase.h"
class Enemy02 :
	public EnemyBase
{
public:
	Enemy02();
	~Enemy02();
		
	virtual void Init()override;

	int GetActive()override;

	virtual void Attack()override;
	virtual void Defend()override;
	virtual void Skill()override;
	virtual void Idle()override;

};

