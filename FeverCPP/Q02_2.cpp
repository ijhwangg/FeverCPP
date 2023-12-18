#include <iostream>

using namespace std;

void swapByRef2(int &ref1, int &ref2)
{
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

int main()
{
	swapByRef2(23, 45);
	// 참조자는 변수를 참조해야하는데 이 경우에는 값을 직접 참조하기 때문에 에러발생
	return 0;
}