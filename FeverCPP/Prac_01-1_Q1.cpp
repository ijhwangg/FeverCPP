#include <iostream>

using namespace std;

int main()
{
	int result = 0;
	for (int i = 0; i < 5; i++)
	{
		int a;
		cout << i + 1 << "번째 정수 입력 : ";
		cin >> a;
		result += a;
	}

	cout << "합계 : " << result << endl;

	return 0;
}