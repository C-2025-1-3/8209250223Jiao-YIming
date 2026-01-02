#include<iostream>
#include<string>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	if (s1[0] == '\0')
	{
		return 0;
	}
	int len1 = 0;
	int len2 = 0;
	
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while(s2[len2] != '\0')
	{
		len2++;
	}
	if (len1 > len2)
	{
		return -1;
	}
		
		for (int i = 0;i <=(len2-len1);i++)
		{
			bool isma = true;
			for (int j = 0;j < len1;j++) {
				if (s1[j] != s2[i + j]) 
{
					isma = false;
					break;
				}
			}
			if (isma){
				return i;
			}
		}
	
	return -1;
}

int main() {
	char s1[80];
	char s2[80];
	cout << "请输入第一组字符串：" << endl;
	cin.getline(s1, 80);
	cout << "请输入第二组字符串：" << endl;
	cin.getline(s2, 80);
	int j = indexOf(s1, s2);
	cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is " << j << endl;
	return 0;
}