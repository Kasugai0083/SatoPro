
#include "Vector2.h"
#include <iostream>

void main() {
	Vector2 vec1{ 10, 30 };
	Vector2 vec2{ 100, 5 };

	Vector2 ans;

	//vec1.X + vec2.X;
	//vec1.Y + vec2.Y;

	ans = vec1 + vec2;

	std::cout << "XÀ•W‚Ì‘«‚µŽZ =>" << ans.X << std::endl;
	std::cout << "YÀ•W‚Ì‘«‚µŽZ =>" << ans.Y << std::endl;
	std::cout << std::endl;

	ans = vec1 - vec2;

	std::cout << "XÀ•W‚Ìˆø‚«ŽZ =>" << ans.X << std::endl;
	std::cout << "YÀ•W‚Ìˆø‚«ŽZ =>" << ans.Y << std::endl;
	std::cout << std::endl;

	ans = vec1 * 2.f;

	std::cout << "XÀ•W‚ÌŠ|‚¯ŽZ =>" << ans.X << std::endl;
	std::cout << "YÀ•W‚ÌŠ|‚¯ŽZ =>" << ans.Y << std::endl;
	std::cout << std::endl;

	ans = vec1 / 2.f;

	std::cout << "XÀ•W‚ÌŠ„‚èŽZ =>" << ans.X << std::endl;
	std::cout << "YÀ•W‚ÌŠ„‚èŽZ =>" << ans.Y << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;

	ans += vec1;
	ans += vec1;
	ans += vec1;

	std::cout << "XÀ•W ‰ÁŽZ‘ã“ü‰‰ŽZ =>" << ans.X << std::endl;
	std::cout << "YÀ•W ‰ÁŽZ‘ã“ü‰‰ŽZ =>" << ans.Y << std::endl;

	std::cout << std::endl;

	ans -= vec1;
	ans -= vec1;
	ans -= vec1;

	std::cout << "XÀ•W Œ¸ŽZ‘ã“ü‰‰ŽZ =>" << ans.X << std::endl;
	std::cout << "YÀ•W Œ¸ŽZ‘ã“ü‰‰ŽZ =>" << ans.Y << std::endl;

	std::cout << std::endl;

	ans *= vec1;
	ans *= vec1;
	ans *= vec1;

	std::cout << "XÀ•W æŽZ‘ã“ü‰‰ŽZ =>" << ans.X << std::endl;
	std::cout << "YÀ•W æŽZ‘ã“ü‰‰ŽZ =>" << ans.Y << std::endl;

	std::cout << std::endl;

	ans /= vec1;
	ans /= vec1;
	ans /= vec1;

	std::cout << "XÀ•W œŽZ‘ã“ü‰‰ŽZ =>" << ans.X << std::endl;
	std::cout << "YÀ•W œŽZ‘ã“ü‰‰ŽZ =>" << ans.Y << std::endl;

	std::cout << std::endl;

	float aaa = ans.Length();

	std::cout << "ans ‚ÌŽÎ•Ó‚Ì’·‚³ =>" << aaa << std::endl;

	std::cout << std::endl;

	std::cout << (vec2 < ans) << std::endl;

	std::cout << std::endl;

	ans.Normalize();

	std::cout << "ans ‚Ì’PˆÊƒxƒNƒgƒ‹X =>" << ans.X << std::endl;
	std::cout << "ans ‚Ì’PˆÊƒxƒNƒgƒ‹Y =>" << ans.Y << std::endl;
}