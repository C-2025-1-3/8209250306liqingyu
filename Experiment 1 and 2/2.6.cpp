#include<iostream>
using namespace std;

int remainder(int a, int b)
{
	while (b != 0)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main()
{
	int a, b;
	cin >> a >> b;
	int factor = remainder(a, b);
	int temp=a;
	while (1)
	{
		if (temp % a == 0 && temp % b == 0)
			break;
		else
			temp += a;
	}
	cout << a << "和" << b << "的最大公因数是：" << factor << endl;
	cout << a << "和" << b << "的最小公倍数是：" << temp << endl;
	return 0;
} 