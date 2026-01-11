#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û£º" << endl;
	cin >> ch;
	if (ch >= 'a' && ch <= 'z')
		cout << static_cast<char> (ch - 'a' + 'A');
	else
		cout << ch + 1;
	return 0;
} 