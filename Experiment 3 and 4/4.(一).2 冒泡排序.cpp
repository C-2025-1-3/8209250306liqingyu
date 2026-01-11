#include<iostream>
#include <cassert>
using namespace std;

//冒泡排序
void bubble_sort(double* arr,int n=10)
{
    int bound = n - 1;// 当前冒泡上界
    while (bound > 0)
    {
        int lastSwap = 0;
        for (int i = 0; i < bound; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                lastSwap = i;// 记录最后一次交换的位置  减少无效比较
            }
        }
        bound = lastSwap; // 无交换则 lastSwap=0，自然退出  提前终止
    }
}

// 辅助函数：检查数组是否升序
bool is_sorted(const double* arr, int n = 10) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1])
            return false;
    }
    return true;
}

// 测试函数
void test() {
    // 测试用例 1: 已排序数组
    {
        double arr[10] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0 };
        cout << "Before sort: ";
        for (int i = 0; i < 10; i++)
            cout << arr[i] << " ";
        bubble_sort(arr);
        assert(is_sorted(arr));
        cout << endl;
        cout << "After sort: ";
        for (int i = 0; i < 10; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    // 测试用例 2: 逆序数组
    {
        double arr[10] = { 10.5, 9.4, 8.3, 7.2, 6.1, 5.0, 4.9, 3.8, 2.7, 1.6 };
        double expected[10] = { 1.6, 2.7, 3.8, 4.9, 5.0, 6.1, 7.2, 8.3, 9.4, 10.5 };
        cout << "Before sort: ";
        for (int i = 0; i < 10; i++)
            cout << arr[i] << " ";
        bubble_sort(arr);
        for (int i = 0; i < 10; i++) {
            assert(arr[i] == expected[i]);
        }
        cout << endl;
        cout << "After sort: ";
        for (int i = 0; i < 10; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    // 测试用例 3: 随机顺序（含重复值）
    {
        double arr[10] = { 5.5, 1.1, 9.9, 1.1, 3.3, 7.7, 2.2, 8.8, 4.4, 6.6 };
        cout << "Before sort: ";
        for (int i = 0; i < 10; i++)
            cout << arr[i] << " ";
        bubble_sort(arr);
        assert(is_sorted(arr));
        // 额外检查重复值位置（可选）
        assert(arr[0] == 1.1 && arr[1] == 1.1);
        cout << endl;
        cout << "After sort: ";
        for (int i = 0; i < 10; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    // 测试用例 4: 全部相同
    {
        double arr[10] = { 3.14, 3.14, 3.14, 3.14, 3.14, 3.14, 3.14, 3.14, 3.14, 3.14 };
        cout << "Before sort: ";
        for (int i = 0; i < 10; i++)
            cout << arr[i] << " ";
        bubble_sort(arr);
        assert(is_sorted(arr)); // 仍然满足非递减
        cout << endl;
        cout << "After sort: ";
        for (int i = 0; i < 10; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    // 测试用例 5: 包含负数和零
    {
        double arr[10] = { -5.0, 0.0, -10.5, 3.14, -1.0, 2.718, 0.0, -0.1, 100.0, -100.0 };
        cout << "Before sort: ";
        for (int i = 0; i < 10; i++)
            cout << arr[i] << " ";
        bubble_sort(arr);
        assert(is_sorted(arr));
        assert(arr[0] == -100.0);
        assert(arr[9] == 100.0);
        cout << endl;
        cout << "After sort: ";
        for (int i = 0; i < 10; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    // 测试用例 6: 极值（大数、小数）
    {
        double arr[10] = { 1e10, -1e10, 1e-10, -1e-10, 0, 12345.6789, -99999.9999, 0.1, -0.1, 1.0 };
        cout << "Before sort: ";
        for (int i = 0; i < 10; i++)
            cout << arr[i] << " ";
        bubble_sort(arr);
        assert(is_sorted(arr));
        cout << endl;
        cout << "After sort: ";
        for (int i = 0; i < 10; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    cout << "All 6 test cases passed for bubble_sort with 10-element arrays!" << endl;
}

int main()
{
    test();
	return 0;
}