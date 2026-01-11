#include<iostream>
using namespace std;

double celsius_to_fah(double cel)    //摄氏温度到华氏温度
{
	return cel * 1.8 + 32;
}

double fahrenheit_to_cels(double fah) //华氏温度到摄氏温度
{
	return (fah - 32) * 5 / 9;
}
