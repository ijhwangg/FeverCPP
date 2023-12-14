#include <iostream>

using namespace std;

void main()
{
#pragma region 문제 1
	/*int result = 0;
	for (int i = 0; i < 5; i++)
	{
		int a;
		cout << i + 1 << "번째 정수 입력 : ";
		cin >> a;
		result += a;
	}

	cout << "합계 : " << result << endl;*/
#pragma endregion

#pragma region 문제 2
	/*char name[100];
	char phoneNumber[100];

	cout << "이름 : ";
	cin >> name;
	cout << "전화 번호 : ";
	cin >> phoneNumber;

	cout << name << " : " << phoneNumber << endl;*/
#pragma endregion

#pragma region 문제 3
	//int a;
	//cin >> a;

	//for (int i = 1; i < 10; i++)
	//{
	//	cout << a << " x " << i <<  " = " << a * i << endl;
	//}
#pragma endregion

#pragma region 문제 4
	int basic = 50;

	while (true)
	{
		cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		int sel;
		cin >> sel;
		int incen = sel * 0.12;

		if (0 > sel)
		{
			cout << "프로그램을 종료합니다." << endl;
			break;
		}
		else
		{
			cout << "이번 달 급여 : " << basic + incen << endl;
		}
	}
	
		
#pragma endregion
}