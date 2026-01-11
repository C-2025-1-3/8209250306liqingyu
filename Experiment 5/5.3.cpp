#include<iostream>
using namespace std;

class Cuboid
{
private:
	double L;
	double W;
	double H;
public:
	Cuboid(double l, double w, double h);
	double calculate();
};

Cuboid::Cuboid(double l, double w, double h):L(l),W(w),H(h){}

double Cuboid::calculate()
{
	return L * W * H;
}

int main()
{
	cout << "请输入第一个长方体的长，宽，高： " << endl;
	double l1, w1, h1;
	cin >> l1 >> w1 >> h1;
	cout << "请输入第二个长方体的长，宽，高： " << endl;
	double l2, w2, h2;
	cin >> l2 >> w2 >> h2;
	cout << "请输入第三个长方体的长，宽，高： " << endl;
	double l3, w3, h3;
	cin >> l3 >> w3 >> h3;
	Cuboid C1(l1, w1, h1), C2(l2, w2, h2), C3(l3, w3, h3);
	cout << "三个长方体的体积分别为： " << C1.calculate() << "  " << C2.calculate() << "  " << C3.calculate() << endl;
	return 0;
}