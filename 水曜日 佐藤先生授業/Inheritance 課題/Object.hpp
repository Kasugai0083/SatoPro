#pragma once

#include "Definition.h"

class Object
{
public:
	Object();
	~Object();

	virtual void Init();
	virtual void Update() = 0;
	virtual void Draw() = 0;

	void SetPos(float x_, float y_);
	void SetPos(const Position& pos);

	const Position& GetPos() const;

protected:
	Position m_Pos;
};

