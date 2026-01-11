#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "student.h"//将类声明头文件包含进来
using namespace std;

int main()
{
	Student stud;//定义对象
	Student stud1(007, "tcg", 'm');
	stud.display();//执行stud对象的display函数
	cout << endl;
	stud1.display();
	cout << endl;
	stud1.set_value(001, "Zhang San", 'n');//一个汉字 ≠ 一个 char
	stud1.display();
	cout << endl;
	return 0;
}
