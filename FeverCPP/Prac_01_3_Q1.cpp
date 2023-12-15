#include <iostream>

using namespace std;

int BoxVolumn(int length, int width, int height)
{
	return length * width * height;
}

int BoxVolumn(int length, int width)
{
	return length * width * 1;
}

int BoxVolumn(int length)
{
	return length * 1 * 1;
}

int main()
{
	cout << "[3, 3, 3] : " << BoxVolumn(3, 3, 3) << endl;
	cout << "[5, 5, D] : " << BoxVolumn(5, 5) << endl;
	cout << "[7, D, D] : " << BoxVolumn(7) << endl;

	return 0;
}