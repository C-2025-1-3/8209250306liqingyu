#include<iostream>
using namespace std;

int peaches(int n)
{
	int result;
	if (n == 1)
	{
		result = 1;
	}
	else
	{
		result = (peaches(n - 1) + 1) * 2;
	}
	return result;
}

int main()
{
	cout << "第一天猴子共摘 " << peaches(10) << " 桃子" << endl;
	return 0;
}