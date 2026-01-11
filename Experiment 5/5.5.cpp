#include<iostream>
using namespace std;

class Point
{
private:
	double X;
	double Y;
public:
	Point(double x = 0, double y = 0);
	void setPoint(int i, int j);
	void display();
};

Point::Point(double x,double y):X(x),Y(y){}

void Point::setPoint(int i, int j)
{
	X += i, Y += j;
}

void Point::display()
{
	cout << "(" << X << "," << Y << ")" << endl;
}

int main() 
{

	Point p1(60, 80);
	cout << "p点的坐标为： ";
	p1.display();
	int i, j;
	cout << "请输入坐标X和Y的变化量： " << endl;
	cin >> i >> j;
	cout << "p点的坐标为： ";
	p1.setPoint(i, j);
	p1.display();
	return 0;
}