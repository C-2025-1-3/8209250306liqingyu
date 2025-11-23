#include<iostream>
using namespace std;
int main()
{
	char ch;
	int letter=0,space=0,mathchar=0,other=0;
	while (cin.get(ch))//逐个字符读入，包括空格、回车、制表符等
	{
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
			letter++;
		else if (ch == ' ')
			space++;
		else if (ch >= '0' && ch <= '9')
			mathchar++;
		else if (ch == '\n')
			break;
		else
			other++;
	}
	cout << "英文字母有" << letter << "个" << endl;
	cout << "空格有" << space << "个" << endl;
	cout << "数字字符有" << mathchar << "个" << endl;
	cout << "其它字符有" << other << "个" << endl;
	return 0;
} 