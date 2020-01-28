#pragma once

#include "Object.hpp"

class EnemyBase :	public Object
{
public:
	EnemyBase();
	~EnemyBase();

	virtual void Attack() = 0;

	//virtual void Update() = 0;
	virtual void Update()override;
	virtual void Draw()override;
	
	virtual void Defend() = 0;
	virtual void Skill() = 0;
	virtual void Idle() = 0;
	virtual int GetActive() = 0;

	EnemyType GetType();

protected:

	EnemyType m_Type;
	Action m_Action;
	int m_hp;
	int m_active;
	char Pepshiman[100];
};

