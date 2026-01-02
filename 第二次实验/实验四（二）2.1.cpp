/*0(1)编写函数检查字符串s1是否为字符串s2的子串，若是，返回第一次匹配的下标，否则返回 - 1。在主程序中输入字符串s1与s2，调用函数实现。
函数原型：int indexof(const char* s1, const char* s2);*/
#include<iostream>
#include<cstring>
using namespace std;
const int Maxnumber = 100000;
int indexof(const char* s1, const char* s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if (len1 > len2||len1==0)
	{
		return -1;
	}
	for (int i = 0;i <= len2 - len1;i++)
	{
		bool isma = true;
		for (int j = 0;j < len1;j++) 
		{
			if (s1[j] != s2[i + j]) {
				isma = false;
				break;
			}
		}
		if (isma) {
			return i;
		}
	}
	return  -1;
}

int main() {
	char s1[Maxnumber];
	char s2[Maxnumber];
	cout << "Enter one string" << endl;
	cin.getline(s1, strlen(s1));
	cout << "Enter another string" << endl;
	cin.getline(s2, strlen(s2));
	cout<<indexof(s1, s2);
}