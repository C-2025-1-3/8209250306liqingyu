#include<iostream>
using namespace std;
int main()
{
	double x, y;
	cout << "请输入自变量x的值：";
	cin >> x;
	if (x > 0 && x < 1)
		y = 3 - 2 * x;
	else if (x < 5)
		y = 1 / (2 * x) + 1;
	else if(x < 10)
		y = x * x;
	cout <<"因变量y的值为：" << y << endl;
	return 0;
} 