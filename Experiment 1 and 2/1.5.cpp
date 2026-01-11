#include<iostream>
using namespace std;
int main()
{
	double huashi, sheshi;
	cout << "请输入华氏温度：" << endl;
	cin >> huashi;
	sheshi = (huashi - 32) / 1.8;
	cout << "该华氏温度转换为摄氏温度后为：" << sheshi << endl;
	return 0;
} 