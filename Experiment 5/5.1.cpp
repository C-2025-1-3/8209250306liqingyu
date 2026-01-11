#include<iostream>
using namespace std;

class Time
{
private:
	int hour;
	int minute;
	int sec;
public:
	Time(int hour = 0, int minute = 0, int sec = 0)
	{
		this->hour = hour, this->minute = minute, this->sec = sec;
	}
	void setHour(int h){hour = h;}
	void setMinute(int m){minute = m;}
	void setSec(int s){sec = s;}
	void showTime()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};

int main()
{
	Time T1;
	int h, m, s;
	cin >> h >> m >> s;
	T1.setHour(h);
	T1.setMinute(m);
	T1.setSec(s);
	T1.showTime();
	return 0;
}