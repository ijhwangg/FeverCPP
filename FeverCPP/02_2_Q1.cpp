#include <iostream>

using namespace std;

int& out(int &n)
{
	int num = n;
	return num;
}

int main()
{
	const int num = 12;

	// const로 선언된 변수를 가르키기 위해서 포인터 변수도 const로 선언
	const int *ptr = &num;

	// 포인터 변수(ptr)을 참조하기 위해서 &ref 선언
	// 값으로 입력받기 위해 앞에 *선언
	const int *(&ref) = ptr;

	cout << *ptr << endl;
	cout << *ref << endl;

	return 0;
}