#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65334;
	cout << "output in unsigned int type:" << testUnint << endl;
	cout << "output in char type:" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in hex unsigned int type:" << hex << testUnint << endl;//½øÖÆ×ª»»
	cout << "output in oct unsigned int type:" << oct << testUnint << endl;
	cout << "3.14 outputed in int type:"<<static_cast<int>(3.14) << endl;
	return 0;
} 