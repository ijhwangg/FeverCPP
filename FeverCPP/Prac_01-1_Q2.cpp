#include <iostream>

using namespace std;

int main()
{
	char name[100];
	char phoneNumber[100];

	cout << "이름 : ";
	cin >> name;
	cout << "전화 번호 : ";
	cin >> phoneNumber;

	cout << name << " : " << phoneNumber << endl;

	return 0;
}