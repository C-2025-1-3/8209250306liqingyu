#define _CRT_SECURE_NO_WARNINGS
#pragma once
class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();
	Student(int num=0 ,const char name[]="", char sex = '0');//函数参数中的数组会自动退化为指针,默认参数不支持初始化列表语法
	void set_value(int num = 0, const char name[] = "", char sex = '0');
private:
	int num;
	char name[20];
	char sex;
};

