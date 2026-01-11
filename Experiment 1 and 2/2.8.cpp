#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double func(double a)
{
	double x1 = a, x2 = (a + 1) / 2;
	while (abs(x2 - x1) > 1e-10)
	{
		double temp = (x2 + a / x2) / 2;
		x1 = x2;
		x2 = temp;
	}
	return x2;
}

int main()
{
	double a; 
	cout << "请输入一个实数：";
	cin >> a;
	double x1 = a, x2 = (a + 1) / 2;
	if (a > 0)
		cout << "a的平方根的值为：" <<fixed<<setprecision(10)<< func(a) << endl;
	else if (a == 0)
		cout << "a的平方根的值为：" << 0<< endl;
	else
		cout << "a的平方根的值为：" << fixed << setprecision(10) << func(-a) << "i" << endl;
	return 0;
} 