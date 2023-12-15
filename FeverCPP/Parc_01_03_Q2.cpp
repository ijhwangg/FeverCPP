#include <iostream>

using namespace std;

int simpleFunc(int a = 10)
{
	return a + 1;
}

int simpleFunc(void)
{
	return 10;
}

int main()
{
	auto a = simpleFunc();
	// 두 함수 모두 입력을 안했을때 동작하기 때문에 충돌이 생김

	return 0;
}