#include <iostream>

using namespace std;

void main()
{
#pragma region ���� 1
	/*int result = 0;
	for (int i = 0; i < 5; i++)
	{
		int a;
		cout << i + 1 << "��° ���� �Է� : ";
		cin >> a;
		result += a;
	}

	cout << "�հ� : " << result << endl;*/
#pragma endregion

#pragma region ���� 2
	/*char name[100];
	char phoneNumber[100];

	cout << "�̸� : ";
	cin >> name;
	cout << "��ȭ ��ȣ : ";
	cin >> phoneNumber;

	cout << name << " : " << phoneNumber << endl;*/
#pragma endregion

#pragma region ���� 3
	//int a;
	//cin >> a;

	//for (int i = 1; i < 10; i++)
	//{
	//	cout << a << " x " << i <<  " = " << a * i << endl;
	//}
#pragma endregion

#pragma region ���� 4
	int basic = 50;

	while (true)
	{
		cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		int sel;
		cin >> sel;
		int incen = sel * 0.12;

		if (0 > sel)
		{
			cout << "���α׷��� �����մϴ�." << endl;
			break;
		}
		else
		{
			cout << "�̹� �� �޿� : " << basic + incen << endl;
		}
	}
	
		
#pragma endregion
}