#include<iostream>
using namespace std;
int main()
{
	int i, j, * pi, * pj;
	pi = &i;
	pj = &j;
	i = 5;
	j = 7;
	cout << i << "\t\t\t" << j << "\t\t\t" << pi << "\t" << pj << endl;
	cout << &i << '\t' << &j << '\t' << &pi << '\t' << &pj << endl;
}