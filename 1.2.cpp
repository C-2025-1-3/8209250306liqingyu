#include<iostream>
using namespace std;
int main()
{
	double pi = 3.14, r, h;
	cout << "请输入圆锥的底面半径和高：" << endl;
	cin >> r >> h;
	double v = pi * r * r * h / 3;
	cout <<"该圆锥的体积为："<< v << endl;
	return 0;
} 