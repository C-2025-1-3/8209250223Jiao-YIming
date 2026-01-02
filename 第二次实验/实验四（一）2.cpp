#include<iostream>
using namespace std;
int main() {
	int listSize = 10;
	double list[10];
	for (int i = 0;i < 10;i++)
		cin >> list[i];
		bool changed = true;
		do
		{
			changed = false;
			for (int j = 0; j < listSize - 1; j++)
				if (list[j] > list[j + 1])
				{
					int temp = list[j];
					list[j] = list[j + 1];
					list[j + 1] = temp;
					changed = true;
				}
		} while (changed);

		for (int k = 0;k < 10;k++)
			cout << list[k] << " ";
}