#include<iostream>
#include<cmath>
using namespace std;

bool is_prime(int num)
{
	for (int i = 2; i*i <= num; i++)//sqrt(num)浮点数精度可能导致漏判
	{
		if (num % i == 0)
			return false;
	}
	return true;
}

int main()
{
	int sum = 1,row=0,n=2;//跳过1的处理
	while (sum<=200)
	{
		if (is_prime(n))
		{
			cout << n << "\t";
			sum++;
			row++;
		}
		if (row == 10)
		{
			cout << endl;
			row = 0;
		}
		n++;
	}
	return 0;
}