#pragma once


/**
* @brief ��_�Ԃ̍��W��ۑ�����N���X\n
* �N���X���m�̎l�����Z�\
*/
class Vector2 {
public:
	//! �����Ȃ��̏ꍇ (0,0) �ŏ�����
	Vector2();

	/**
	* @brief �R���X�g���N�^�Œl��ݒ�
	* @param[in] x_ X���W�������̒l�ŏ�����
	* @param[in] y_ Y���W�������̒l�ŏ�����
	*/
	Vector2(float x_, float y_);
	~Vector2();
	
	//�x�N�g���̎Εӂ̒������Ԃ�
	float Length() const;

	//! �x�N�g���̐��K��(�P�ʃx�N�g��)
	void Normalize();

	//! + ���Z�q�̃I�[�o�[���[�h
	Vector2 operator + (const Vector2& rhs_) const;
	//! - ���Z�q�̃I�[�o�[���[�h
	Vector2 operator - (const Vector2& rhs_) const;
	//! * ���Z�q�̃I�[�o�[���[�h
	Vector2 operator * (const Vector2& rhs_) const;
	Vector2 operator * (float f_)const;
	//! / ���Z�q�̃I�[�o�[���[�h
	Vector2 operator / (const Vector2& rhs_) const;
	Vector2 operator / (float f_) const;

	Vector2& operator = (const Vector2& rhs_);

	//! + ���Z�q�̃I�[�o�[���[�h
	Vector2& operator += (const Vector2& rhs_);
	//! - ���Z�q�̃I�[�o�[���[�h
	Vector2& operator -= (const Vector2& rhs_);
	//! * ���Z�q�̃I�[�o�[���[�h
	Vector2& operator *= (const Vector2& rhs_);
	Vector2& operator *= (float f_);
	//! / ���Z�q�̃I�[�o�[���[�h
	Vector2& operator /= (const Vector2& rhs_);
	Vector2& operator /= (float f_);

	//! �������] �P�����Z�q�̃I�[�o�[���[�h
	Vector2 operator - () const;

	//! < ���Z�q�̃I�[�o�[���[�h
	bool operator < (const Vector2& rhs_)const;
	bool operator > (const Vector2& rhs_)const;
	bool operator <= (const Vector2& rhs_)const;
	bool operator >= (const Vector2& rhs_)const;

public:
	//! ���W��ۑ�����ϐ�
	float X, Y;
};