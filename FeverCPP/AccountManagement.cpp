#include <iostream>	
#include <string>

using namespace std;

void showMenu()
{
	cout << "------MENU-------" << endl;
	cout << "1. 계좌계설" << endl;
	cout << "2. 입 금" << endl;
	cout << "3. 출 금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;	
}

void createAccount()
{
	cout << "계좌가 생성되었습니다. " << endl;
	int id;
	char name[20];
	int balance;

	cout << "[계좌개설]" << endl;
	cout << "계좌ID : "; cin >> id;
	cout << "이 름 : "; cin >> name;
	cout << "입금애기 "; cin >> balance;
	cout << endl;



}

void inputMoney(int id, int money)
{
	cout << "계좌ID : " << id << endl;
	cout << "입금액 : " << money << endl;
	cout << "입금 완료" << endl;
}

void outputMoney(int money, int balance)
{
	cout << "출금액 : " << money << endl;
	cout << "잔액 : " << balance - money << endl;
	cout << "출금 완료" << endl;
}

void outputAccountData(int id, string name, int balance)
{
	cout << "계좌ID : " << id << endl;
	cout << "이 름 : " << name << endl;
	cout << "잔 액 : " << balance << endl;
}

void close()
{
	cout << "프로그램을 종료합니다. " << endl;
}


int main()
{
	showMenu();

	int input;
	cin >> input;
	cout << "선택 : " << input << endl;

	switch (input)
	{
	case 1:
		createAccount();

		break;
	case 2:
		inputMoney(115, 70);
		break;
	case 3:
		outputMoney(30, 70);
		break;
	case 4:
		outputAccountData(115, "황인정", 70);
		break;
	case 5:
		close();
		break;

	default:
		break;
	}
	

	return 0;
}