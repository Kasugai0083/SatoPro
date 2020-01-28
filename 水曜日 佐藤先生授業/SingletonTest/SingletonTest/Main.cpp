#include "SingletonTemplate.h"
#include <iostream> 

class Hoge : public Singleton<Hoge> {
//�N���X�̎���
public:
	void SetPos(int x_, int y_){ x = x_; y = y_; }
	int GetPosX() const { return x; }
	int GetPosY() const { return y; }

protected:
	int x, y;

//�V���O���g���e���v���[�g���g�����߂̐錾��
private:
	//�V���O���g���e���v���[�g�Ɏ��g�iHoge�j���w�肵�����̂����A
	//���ʂ�private,protected�ɃA�N�Z�X�ł���悤�ɂ���
	friend Singleton<Hoge>;

	Hoge() {};
	virtual ~Hoge() {};

	//�R�s�[�R���X�g���N�^�̋֎~
	Hoge(const Hoge&) = delete;
	Hoge& operator=(const Hoge&) = delete;
	//���[�u�R���X�g���N�^�̋֎~
	Hoge(const Hoge&&) = delete;
	Hoge& operator=(const Hoge&&) = delete;

};


//class Foo : public Hoge {
//public:
//	Foo() {};
//	~Foo() {};
//
//	void SetPosZ(int z_) { z = z_; }
//	int GetPosZ() const { return z; }
//
//private:
//	int z;
//
//};

void main() {

	Hoge::CreateInstance();	//�V���O���g���̎��Ԃ��쐬
	
	// Hoge* phoge2 = new Hoge(); // ����new���邱�Ƃ͂ł��Ȃ�
	// Hoge* phoge2 = new Hoge(*Hoge::GetInstance());

	{
		Hoge* phoge = Hoge::GetInstance();
		phoge->SetPos(100, 200);
		std::cout << "hoge-> GetPosX() => " << phoge->GetPosX() << std::endl;
		std::cout << "hoge-> GetPosY() => " << phoge->GetPosY() << std::endl;

		//Foo::CreateInstance(); 
		//{
		//	Hoge* hoo = Foo::GetInstance();
		//	hoo->SetPosZ(100);
		//}
		//Foo::DestroyInstance();
	}
	Hoge::DestroyInstance();	//�V���O���g���̎��Ԃ�j��
}