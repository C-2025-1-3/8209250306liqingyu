#include<iostream>
#include<string>
using namespace std;

void count(const char s[], int counts[])
{
	int len = strlen(s);
	for (int i = 0; i < len; i++)
	{
		if (isalpha(s[i]))//isalpha( )判断一个字符是否为字母
		{
		    //tolower() 大写转小写   toupper() 小写转大写
			counts[tolower(s[i]) % 'a']++;
			//isalpha( ) tolower() toupper() 包含于 <iostream>
		}
	}
}

int main()
{
	string str;
	getline(cin, str);
	//getline(cin,str)获取一整行字符，不包括换行符  cin.get()获取一个字符，包括\n  
	//getline(cin,str)  cin.get() 包含于 <string>
	int counts[26]{};
	count(str.c_str(), counts);//.c_str() string -> const char *
	for (int i = 0; i < 26; i++)
		if (counts[i] != 0)
			cout << static_cast<char>('a' + i) << ": " << counts[i] << " times" << endl;
	return 0;
}