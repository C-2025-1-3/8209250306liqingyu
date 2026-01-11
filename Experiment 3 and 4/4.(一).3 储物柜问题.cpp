#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	bool cabinet[101]{};
	fill(cabinet, cabinet + 101, 1);
	for (int i = 2; i <= 100; i++)
		for (int j = i; j <= 100; j += i)
			cabinet[j] ^= 1;
	for (int i = 1; i <= 100; i++)
		if (cabinet[i] == 1)
			cout << i << " ";
	//cout << (cabinet[0] ^ 1);
	//实际上，在标准 C++ 中，流插入 << 的优先级高于 ^，
	//所以表达式 cout << cabinet[0] ^ 1 会被解析为：(cout << cabinet[0]) ^ 1;
	return 0;
}