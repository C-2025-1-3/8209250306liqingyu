#include<iostream>
#include<iomanip>
#include "mytemperature.h"
using namespace std;
int main()
{
	cout << "请输入您要转换的摄氏温度数量："<<endl;
	int m;
	cin >> m;
	double* cels = new double[m];
	cout << "请输入对应的摄氏温度"<<endl;
	for (int i = 0; i < m; i++)
		cin >> cels[i];
	cout << "Celsius   to   Fahrenheit" << endl;
	for (int i = 0; i < m; i++)
		cout <<fixed<<setprecision(2)<< cels[i] << "\t\t" << celsius_to_fah(cels[i]) << endl;
	
	cout << endl;
	cout << "请输入您要转换的华氏温度数量：" << endl;
	int n;
	cin >> n;
	double* fahs = new double[n];
	cout << "请输入对应的华氏温度" << endl;
	for (int i = 0; i < n; i++)
		cin >> fahs[i];
	cout << "Fahrenheit   to   Celsius" << endl;
	for (int i = 0; i < n; i++)
		cout << fahs[i] << "\t\t" << fahrenheit_to_cels(fahs[i]) << endl;
	double* cels = new double[m];
	double* fahs = new double[n];//记得释放堆内存
	return 0;
}