#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cmath>
using namespace std;

int parseHex(const char* const hexString)
{
	int sum = 0;
	for (int i = 0; i < strlen(hexString); i++)
	{
		int site = pow(16, strlen(hexString) -1 - i);
		char temp = toupper(hexString[i]);
		if (isalpha(temp))
		{
			if(temp >='A' && temp <='F')
				sum += (temp - 'A' + 10) * site;
			else
			{
				cout << "输入错误" << endl;
				return -1;
			}
		}
		else
			sum += (hexString[i] - '0')*site;
	}
	return sum;
}

int main()
{
	char  str[101]{};
	scanf("%100s", str);//限制读取长度
	//scanf 会从输入中读取非空白字符（跳过前导空格、换行、制表符等），
	//在最后一个字符之后，自动写入一个 \0
	//但有一个致命前提：缓冲区足够大！
	printf("%d",parseHex(str));
	return 0;
}