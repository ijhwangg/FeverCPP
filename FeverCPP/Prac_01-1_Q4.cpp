#include <iostream>

using namespace std;

int main()
{
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

	return 0;
}