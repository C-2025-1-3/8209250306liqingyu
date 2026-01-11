#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "student.h" //不要漏写此行，否则编译通不过
using namespace std;

void Student::display()//在类外定义display类函数
{
    cout << "num：" << num << endl;
    cout << "name：" << name << endl;
    cout << "sex：" << sex << endl;
}

Student::Student(int num, const char name[], char sex) :num(num), name{},sex(sex)
{
    strncpy(this->name, name, 20 - 1);
    this->name[19] = '\0';
}

void Student::set_value(int num, const char name[], char sex) 
{
    this->num = num, this->sex = sex;
    strncpy(this->name, name, 20 - 1);
    this->name[19] = '\0';
}

/*
1.数组不能被复制初始化:不能在初始化列表中直接写 : name(n)
2.数组采用聚合初始化（编译时已知）：
    1.char arr[10] = "hello"; 在声明时是允许的
    2.或使用{ }进行初始化
3.指针不能直接用来初始化数组：
    因为编译器不知道你要复制多少个字符，也无法在初始化阶段展开指针内容。
4.(字符)数组（char arr[N]）作为内建类型数组，默认初始化 = 全是随机垃圾值！
5.做形参：函数参数中的数组会自动退化为指针,函数参数不支持初始化列表语法
6.默认值：无法直接在函数或构造函数的参数中为“字符数组”设置默认值
    方法：传入const char *, 先零初始化，再用 strcpy 复制  
7.相关知识：
    “运行时指针” 是一个在 C/C++ 编程中常见的术语，用来强调某个指针的值（即它所指向的地址）只有在程序运行时才能确定，而不是在编译期已知。
    编译期已知的指针/地址：
      字符串字面量（如 "Hello"）的地址通常在编译期或链接期确定。
      全局变量的地址在程序加载时确定（但对程序员来说仍算“编译期常量”）。
*/

