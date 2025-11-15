#include <iostream>
using namespace std;
int main() {
	double x, y;
	cout << "请输入自变量:";
	cin >> x;
	if (x > 0 && x < 1) {
		y = 3 - 2 * x;
		cout << "函数值为：" << y << endl;
	}
	else if (x >= 1 && x < 5) {
		y = 2 / (4 * x) + 1;
		cout << "函数值为：" << y << endl;
	}
	else if (x >= 5 && x < 10) {
		y = x * x;
		cout << "函数值为：" << y << endl;
	}

	return 0;
}