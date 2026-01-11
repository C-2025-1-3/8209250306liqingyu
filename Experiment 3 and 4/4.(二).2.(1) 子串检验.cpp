#include<iostream>
#include<string>
using namespace std;

int indexof(const char *s1, const char *s2)
{
	//获取内容长度
	int size1 = strlen(s1), size2 = strlen(s2);
	for (int i = 0; i <= size2 - size1; i++)
	{
		int j = 0;
		for (j; j < size1; j++)
		{
			if (s1[j] != s2[i + j])
				break;
		}
		if (j >= size1)
			return i;
	}
	return -1;
}

int main()
{
	char s1[101]{}, s2[101]{};//初始化为 '\0'（即数值 0）
	cout << "Enter the first string: (no more than 100 characters)" << endl;
	cin.getline(s1, 101);
	cout << "Enter the second string: (no more than 100 characters)" << endl;
	cin.getline(s2, 101);
	//getline(cin, str) 
	//cin.getline(buf, size) size为缓冲区大小，包括\0
	cout << "indexOf(“" << s1 << "”, “" << s2 << "”) is: ";
	cout << indexof(s1, s2) << endl;
	return 0;
}

//void indexOf(string *s1, string *s2, int size1, int size2, int* site, int* index)
//{
//	for (int i = 0; i <= size2 - size1; i++)
//	{
//		int j = 0;
//		for (j; j < size1; j++)
//		{
//			if ((*s1)[j] != (*s2)[i + j])//后缀运算符（包括 [] 和函数调用 ()）的优先级高于一元运算符（如 *、&、++、-- 等）。
//				break;
//			
//		}
//		if (j >= size1)
//		{
//			site[*index] = i;
//			(*index)++;
//			//*index++ → *(index++) （因为 ++ 优先级 > *）
//		}
//	}
///*
//s1[j] 当 s1 是 string* 时，
//等价于 *(s1 + j)，
//即访问第 j 个 string 对象——但你只有一个字符串！
//*/
//}
//
//int main()
//{
//	string s1, s2;
//	cout << "Enter the first string: " << endl;
//	getline(cin, s1);
//	cout << "Enter the second string: " << endl;
//	getline(cin, s2);
//	int size1 = s1.size(), size2 = s2.size();
//	int* site = new int [size2] {}, index = 0;
//	indexOf(&s1, &s2, size1, size2, site, &index);
//	if (index == 0)
//		cout << -1;
//	else
//	{
//		cout << "indexOf(“" << s1 << "”, “" << s2 << "”) is: ";
//		for (int i = 0; i < index; i++)
//			cout << site[i] << " ";
//	}
//	delete[] site;
//	return 0;
//}
/*
string -> const char *         .c_str()
string -> char * / char []     动态数组 + strcpy()
const char * -> string         构造函数 str(const char *) 赋值法
char []/* -> string            构造函数
没有\0的char[] ->string        构造函数并指定内容长度（不含\0） str(char[],size)
*/