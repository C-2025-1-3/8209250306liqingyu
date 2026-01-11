#include<iostream>
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int index1 = 0, index2 = 0;
	for (int i = 0; i < size1 + size2; i++)
	{
		if (index2 == size2)
		{
			list3[i] = list1[index1];
			index1++;
		}
		else if (index1 == size1)
		{
			list3[i] = list2[index2];
			index2++;
		}
		else if(list1[index1] <= list2[index2])
		{
			list3[i] = list1[index1];
			index1++;
		}
		else
		{
			list3[i] = list2[index2];
			index2++;
		}
	}
}

int main()
{
	cout << "Enter List1: " << endl;
	int m;
	cin >> m;
	int* list1 = new int[m];
	for (int i = 0; i < m; i++)
		cin >> list1[i];
	cout << "Enter List2: " << endl;
	int n;
	cin >> n;
	int* list2 = new int[n];
	for (int i = 0; i < n; i++)
		cin >> list2[i];
	int* list3 = new int[m + n];
	merge(list1, m, list2, n, list3);
	cout << "The merged list is: ";
	for (int i = 0; i < m+n ; i++)
		cout << list3[i] << " ";
	delete[] list1;
	delete[] list2;
	delete[] list3;
	return 0;
}