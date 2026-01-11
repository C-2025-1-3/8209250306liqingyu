#include<iostream>
using namespace std;

class Students
{
private:
	int num;
	double grade;
public:
	Students(int num = 0, double grade = 0);
	void setData(int num, double grade);
	static int maxGradeNum(Students *arr,int size);
	double getGrade() { return grade; }
	int getNum() { return num; }
};

Students::Students(int num ,double grade):num(num),grade(grade){}

void Students::setData(int num, double grade)
{
	this->num = num, this->grade = grade;
}

int Students::maxGradeNum(Students *arr,int size)//形参中数组退化为指针，无法使用.size()函数
{
	int num=0;
	double max = -1;
	for (int i = 0; i < size; i++)
	{
		if (arr[i].getGrade() > max)
		{
			max = arr[i].getGrade();
			num = i;
		}
	}
	return arr[num].getNum();
}

int main()
{
	Students arr[5]={ };
	cout << "请输入5位同学的学号及成绩:" << endl;
	for (int i = 0; i < 5; i++)
	{
		int tNum, tGrade;
		cin >> tNum >> tGrade;
		arr[i].setData(tNum, tGrade);
	}
	cout << "这五位同学中，成绩最高的是： ";
	cout << Students::maxGradeNum(arr, 5) << " 号同学" << endl;
	return 0;
}