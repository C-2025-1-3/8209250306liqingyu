#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "请输入 + - * / 四种运算符中的一个：";
	cin >> ch;
	while (ch != '+' && ch != '-' && ch!='*' && ch!='/')
	{
		cout << "输入错误，请重新输入 + - * / 四种运算符中的一个：";
		cin >> ch;
	}
	cout << "请输入两个数：";
	double a, b;
	cin >> a >> b;
	switch(ch)
	{
	case '+':
		cout << a << "+" << b << "=" << a + b;
		break;
	case '-':
		cout << a << "-" << b << "=" << a - b;
		break;
	case '*':
		cout << a << "*" << b << "=" << a * b;
		break;
	case '/':
	{
		while (b == 0)
		{
			cout << "除数不能为零，请重新输入除数：";
			cin >> b;
		}
		cout << a << "/" << b << "=" << a / b;
		break;
	}
	}
	return 0;
} 