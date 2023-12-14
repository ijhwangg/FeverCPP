#include <iostream>

using namespace std;

void main()
{
	int result = 0;
	for (int i = 0; i < 5; i++)
	{
		int a;
		cout << i + 1 << "��° ���� �Է� : ";
		cin >> a;
		result += a;
	}

	cout << "�հ� : " << result << endl;
}