#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	double a[3]{};
	cout << "请输入三角形三条边的长度：";
	for (int i = 0; i < 3; i++)
		cin >> a[i];
	sort(a, a + 3);
	if (a[0] + a[1] > a[2])
	{
		if (a[0] == a[1] || a[0] == a[2] || a[1] == a[2])
			cout << "该三角形是等腰三角形" << endl;
		else
			cout << "该三角形不是等腰三角形" << endl;
		cout << "该三角形的周长为：" << a[0] + a[1] + a[2] << endl;
	}
	else
	{
		cout << "这三条边无法构成三角形" << endl;
	}
	return 0;
} 