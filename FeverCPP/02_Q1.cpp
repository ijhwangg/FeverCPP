#include <iostream>

using namespace std;

int function1(int &num)
{
	return num++;
}

int function2(int &num)
{
	return num *= -1;
}

int main()
{
	int a;
	cin >> a;
	function1(a);
	cout << a << endl;

	function2(a);
	cout << a << endl;
	   	 
	return 0;
}