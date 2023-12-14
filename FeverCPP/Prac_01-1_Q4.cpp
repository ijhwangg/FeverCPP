#include <iostream>

using namespace std;

int main()
{
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

	return 0;
}