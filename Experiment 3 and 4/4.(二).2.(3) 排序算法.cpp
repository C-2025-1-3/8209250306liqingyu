#include<iostream>
using namespace std;

void QuickSort(int arr[], int begin, int end)//基础快速排序
{
	if (begin >= end) return;// 递归终止条件：当区间无效（begin > end）或只有一个元素（begin == end）时，直接返回
	int l = begin, r = end; // 初始化左右指针：l 为左边界（坑位），r 为右边界
	int val = arr[l];// 选择最左边的元素作为基准值（pivot）
	while (l < r)// 分区过程：将小于 pivot 的放左边，大于 pivot 的放右边
	{
		while (l<r && arr[r] > val) r--;// 从右往左找第一个 <= pivot 的元素（注意：包含等于，避免重复元素卡住）
		if (l < r) // 找到后，将其填入左边的“坑”中，并将 l 右移，形成新的“右坑”
		{
			arr[l] = arr[r];
			l++;
		}
		while (l<r && arr[l] < val) l++;// 从左往右找第一个 >= pivot 的元素
		if (l < r)// 找到后，将其填入右边的“坑”中，并将 r 左移，形成新的“左坑”
		{
			arr[r] = arr[l];
			r--;
		}
	}
	arr[l] = val;// 循环结束时，l == r，此处即为基准值的最终位置
	QuickSort(arr, begin, l - 1);// 递归排序基准值左边的部分 [begin, l-1]
	QuickSort(arr, l + 1, end);// 递归排序基准值右边的部分 [l+1, end]
	
	//优化方向
	//1.基准值选取  随机法，三值取中法  避免最坏情况
	//2.对于有序，小数列  结合插入排序
	//3.三路快排  处理多重复数列
}

int main()
{
	int n = 0;
	cout << "请输入数列长度： " << endl;
	cin >> n;
	int * arr = new int[n];
	cout << "请输入包含" << n << "个数的数列： " << endl;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	QuickSort(arr, 0, n-1);
	int* p = arr;
	for (int i = 0; i < n; i++)
		cout << *(p + i) << " ";
	delete[] arr;
	return 0;
}