#include<iostream>
#include<string>
using namespace std;

int main() {
	string input;
	cout << "请输入一行字符：" << endl;
	getline(cin, input);
	int a = 0, b = 0, p = 0, d = 0;
	for (char c : input) {
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
			a++;
		}
		else if (c >= '0' && c <= '9') {
			b++;
		}
		else if (c == ' ') { d++; }
		else {
			p++;
		}
	}
	cout << "字母个数为：" << a << endl;
	cout << "数字个数为：" << b << endl;
	cout << "空格个数为：" << d << endl;
	cout << "其他字符个数为：" << p << endl;

	return 0;
}