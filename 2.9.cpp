#include<iostream>
using namespace std;
int main()
{
	double day = 0, ave = 0, sum = 0, n = 1;
	while (1)
	{
		n = n * 2;
		if (n > 100)
			break;
		sum += n;
		day++;
	}
	cout<<sum*0.8/day<<endl;
	return 0;
} 