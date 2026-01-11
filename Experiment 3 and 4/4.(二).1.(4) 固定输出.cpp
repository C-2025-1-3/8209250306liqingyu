#include<iostream>
using namespace std;

//int* f()
//{
//	int list[] = { 1,2,3,4 };
//	return list;
//}
/*
list 是一个局部自动变量（automatic variable），它的生命周期仅限于函数 f() 的执行期间。
当 f() 执行完毕并返回时，list 所占用的栈内存被释放（或标记为可重用）。
因此，return list; 实际上返回的是一个指向已无效内存的指针。
在 main() 中使用这个指针（如 p[0]、p[1]）属于访问已释放的栈内存，这是 C++ 标准中的未定义行为（UB）。
*/

int* f()
{
	int* list = new int [4] {1, 2, 3, 4};
	return list;
}

void main()
{
	int* p = f();
	cout << p[0] << endl;
	cout << p[1] << endl;
	delete[] p;
}
