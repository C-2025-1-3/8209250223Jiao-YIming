#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int i = 0;
	int j = 0;
	int k = 0;
	while (i < size1 && j < size2) 
	{
		if (list1[i] < list2[j]) {
			list3[k] = list1[i];
			i++;
		}
		else {
			list3[k] = list2[j];
			j++;
		}
		k++;
	}


	while (i < size1)
	{
		list3[k] = list1[i];
		i++;
		k++;
	}

	while (j < size2)
	{
		list3[k] = list2[j];
		j++;
		k++;
	}
}

void bubblesort(int list3[], int len)
{
	for (int i = 0;i < len - 1;i++) {
		for (int j = 0;j < len - i - 1;j++)
		{
			if (list3[j] > list3[j + 1])
			{
				int temp = list3[j];
				list3[j] = list3[j + 1];
				list3[j + 1] = temp;
			}
		}
	}
}



int main()
{
	
	const int maxArrnumber = 80;
	int list1[maxArrnumber];
	int list2[maxArrnumber];
	int list3[maxArrnumber * 2];
	int size1, size2;
	cout << "请输入两组数组长度:" << endl;;
	cin >> size1 >> size2;
	cout << "Enter list1:" << endl;
	int len = size1 + size2;
	for(int i=0;i<size1;i++)
	{
		cin >> list1[i];
	}
	cout << "Enter list2:" << endl;
	for (int i = 0;i < size2;i++)
	{
		cin >> list2[i];
	}
	merge(list1, size1, list2, size2, list3);
	bubblesort(list3, len);
		cout << "合并后数据为：";
		for (int j = 0;j < (size1 + size2);j++) 
		{
			cout << list3[j] << " ";
		}
		cout << endl;
		return 0;
}

















