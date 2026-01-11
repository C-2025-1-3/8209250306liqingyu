#include<iostream>
using namespace std;
int main()
{
	int k=0;//k未定义 未初始化
	int i = k + 1;
	cout << i++ << endl;
	i = 1;//i重定义
	cout << i++ << endl;
	cout<<"Welcome to C++!"<<endl; //缺少右引号
	return 0;
}