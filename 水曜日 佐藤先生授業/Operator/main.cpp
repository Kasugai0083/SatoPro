
#include "Vector2.h"
#include <iostream>

void main() {
	Vector2 vec1{ 10, 30 };
	Vector2 vec2{ 100, 5 };

	Vector2 ans;

	//vec1.X + vec2.X;
	//vec1.Y + vec2.Y;

	ans = vec1 + vec2;

	std::cout << "X���W�̑����Z =>" << ans.X << std::endl;
	std::cout << "Y���W�̑����Z =>" << ans.Y << std::endl;
	std::cout << std::endl;

	ans = vec1 - vec2;

	std::cout << "X���W�̈����Z =>" << ans.X << std::endl;
	std::cout << "Y���W�̈����Z =>" << ans.Y << std::endl;
	std::cout << std::endl;

	ans = vec1 * 2.f;

	std::cout << "X���W�̊|���Z =>" << ans.X << std::endl;
	std::cout << "Y���W�̊|���Z =>" << ans.Y << std::endl;
	std::cout << std::endl;

	ans = vec1 / 2.f;

	std::cout << "X���W�̊���Z =>" << ans.X << std::endl;
	std::cout << "Y���W�̊���Z =>" << ans.Y << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;

	ans += vec1;
	ans += vec1;
	ans += vec1;

	std::cout << "X���W ���Z������Z =>" << ans.X << std::endl;
	std::cout << "Y���W ���Z������Z =>" << ans.Y << std::endl;

	std::cout << std::endl;

	ans -= vec1;
	ans -= vec1;
	ans -= vec1;

	std::cout << "X���W ���Z������Z =>" << ans.X << std::endl;
	std::cout << "Y���W ���Z������Z =>" << ans.Y << std::endl;

	std::cout << std::endl;

	ans *= vec1;
	ans *= vec1;
	ans *= vec1;

	std::cout << "X���W ��Z������Z =>" << ans.X << std::endl;
	std::cout << "Y���W ��Z������Z =>" << ans.Y << std::endl;

	std::cout << std::endl;

	ans /= vec1;
	ans /= vec1;
	ans /= vec1;

	std::cout << "X���W ���Z������Z =>" << ans.X << std::endl;
	std::cout << "Y���W ���Z������Z =>" << ans.Y << std::endl;

	std::cout << std::endl;

	float aaa = ans.Length();

	std::cout << "ans �̎Εӂ̒��� =>" << aaa << std::endl;

	std::cout << std::endl;

	std::cout << (vec2 < ans) << std::endl;

	std::cout << std::endl;

	ans.Normalize();

	std::cout << "ans �̒P�ʃx�N�g��X =>" << ans.X << std::endl;
	std::cout << "ans �̒P�ʃx�N�g��Y =>" << ans.Y << std::endl;
}