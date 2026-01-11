#include<iostream>
using namespace std;
int main()
{
	int arr[10]{};
	int flag[10]{};
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
		for (int j = 0; j < i; j++)
		{
			if (arr[j] == arr[i])
			{
				flag[i] = 1;
				break;
			}
		}
	}
	for (int i = 0; i < 10; i++)
		if (flag[i] == 0)
			cout << arr[i]<<" ";
	return 0;
}