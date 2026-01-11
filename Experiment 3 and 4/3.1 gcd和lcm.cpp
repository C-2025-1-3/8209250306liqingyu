#include<iostream>
using namespace std;

int gcd(int& m, int& n)
{
	int a = m, b = n;
	while (b != 0)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int lcm(int& a, int& b)
{
	return a * b / gcd(a, b);
}

int main()
{
	cout << "请输入正整数 m ,n: " << endl;
	int m, n;
	cin >> m >> n;
	cout << "m,n的最小公倍数时：" << lcm(m, n) << endl;
	cout << "m,n的最大公约数为：" << gcd(m, n) << endl;
	return 0;
}