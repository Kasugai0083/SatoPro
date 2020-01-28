#include "EnemyManager.h"


EnemyManager::EnemyManager()
{
	for (int i = 0; i < ENEMY_MAX; i++) {
		m_enemys[i] = nullptr;
	}
}


EnemyManager::~EnemyManager()
{
	for (int i = 0; i < ENEMY_MAX; i++) {
		if (m_enemys[i] != nullptr) {
			delete m_enemys[i];
			m_enemys[i] = nullptr;
		}
	}
}

void EnemyManager::Update() {
	for (int i = 0; i < ENEMY_MAX; i++) {
		if (m_enemys[i] != nullptr) {
			m_enemys[i]->Update();
		}
	}
}
void EnemyManager::Draw() {
	for (int i = 0; i < ENEMY_MAX; i++) {
		if (m_enemys[i] != nullptr) {
			m_enemys[i]->Draw();
		}
	}
}

bool EnemyManager::CreateEnemy(EnemyType type_) {
	for (int i = 0; i < ENEMY_MAX; i++) {
		if (m_enemys[i] == nullptr) {
			if (type_ == EnemyType_00) {
				m_enemys[i] = new Enemy00;
			}
			else if (type_ == EnemyType_02) {
				m_enemys[i] = new Enemy02;
			}
			else {
				m_enemys[i] = nullptr;
			}
			return true;
		}

	}

	return false;

}

int EnemyManager::GetEnemyNum()const {
	for (int i = 0; i < ENEMY_MAX; i++) {
		if (m_enemys == nullptr) {
			return i;
		}
	}
}
int EnemyManager::GetEnemyNum(EnemyType type_)const {

	int count = 0;

	for (int i = 0; i < ENEMY_MAX; i++) {
		if (m_enemys[i] != nullptr) {
			if (type_ == EnemyType_00) {
				if (m_enemys[i]->GetActive() == 1) {
					count += 1;
				}
			}
			else if (type_ == EnemyType_02) {
				if (m_enemys[i]->GetActive() == 2) {
					count += 1;
				}
			}
		}
	}

	return count;
}
