/*编写一个函数将以字符串形式表示的一个16进制数转换为10进制数，并在主函数中测试。函数原型 int parseHex(const char* const hexString);
如：调用函数 parseHex(“A5”);返回165*/
#include<iostream>
using namespace std;
#include<cstring>
#include<cctype>
const int Max = 100000;
int parseHex(const char* const hexString)
{
	int result = 0;
	int start = 0;
	int len = strlen(hexString);
	if (hexString[0] == '0' && len >= 2 && hexString[1] == 'x'/*|| hexString[1] == 'X'*/)
		start = 2;
	for (int i = start;i < len;i++)
	{
		char ch = toupper(hexString[i]);
		int val;
		if (ch >= '0' && ch <= '9')
		{
			val = hexString[i] - '0';
		}
		else if (ch >= 'A' && ch <= 'F')
		{
			val = (ch - 'A') + 10;
		}
		else {
			cout << "false,include 非16进制数字" << endl;
			return -1;
		}
		result = result * 16 + val;
	}
	return result;
	}
int main() {
	char hexstring[Max];
	cin.getline(hexstring, Max);
	int len = strlen(hexstring);
	int del = parseHex(hexstring);
	cout << del;
}