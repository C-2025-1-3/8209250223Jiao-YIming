#include<iostream>
using namespace std;
void bubbleSort(int* arr, int len)
{
	if (len <= 1)
		return;
	for (int i = 0;i < len - 1;i++)
	{
		for (int j = 0;j < len - i - 1;j++)
		{
			if (*(arr + j) > *(arr + j + 1))
			{
				int temp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = temp;
			}
		}
	}
}

int main() {
	int len = 0;
	cout << "请输入元素的个数" << endl;
	cin >> len;
	if (len <= 0) {
		cout << "数组个数必须为正整数" << endl;
		return 0;
	}
	int* un = new int[len];
	cout << "动态数组指针地址:" << &un << endl;
	cout << "数组首地址:" << un << endl;
	cout << "请输入" << len << "个整数(空格分隔): ";
	for (int i = 0;i < len;i++)
	{
		cin >> *(un + i);
		cout << "un+" << i << "地址：" << (un + i) << ",值:" << *(un + i) << endl;
	}
	bubbleSort(un, len);
	cout << "排序后的数组：";
	for (int i = 0;i < len;i++)
	{
		cout << *(un + i) << " ";
	}cout << endl;
	delete[]un;
	un = nullptr;
	return 0;
}