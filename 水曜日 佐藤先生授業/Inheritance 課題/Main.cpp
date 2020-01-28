#include "EnemyManager.h"
#include "Definition.h"
#include <stdio.h>

#include <stdlib.h>
#include <time.h>

void main() {
	srand((int)time(NULL));


	EnemyManager tmp;

	tmp.CreateEnemy(EnemyType_00);
	tmp.CreateEnemy(EnemyType_00);
	tmp.CreateEnemy(EnemyType_02);
	tmp.CreateEnemy(EnemyType_02);
	tmp.CreateEnemy(EnemyType_00);
	tmp.CreateEnemy(EnemyType_00);
	tmp.CreateEnemy(EnemyType_00);
	tmp.CreateEnemy(EnemyType_02);
	tmp.CreateEnemy(EnemyType_02);
	tmp.CreateEnemy(EnemyType_02);

	tmp.Update();
	tmp.Draw();

	printf("%d\n",tmp.GetEnemyNum(EnemyType_00));
}