
#include<iostream>
using namespace std;
int main() {
	double a, x1;
	cout << "请输入一个数a：";
	cin >> a;
	double x0 = sqrt(a);
	const double q = 1e-5;
	if (a < 0) {
		cout << "无意义" << endl;
		return 0;
	}
	else {
		do {
			x1 = 0.5 * (x0 + a / x0);
			if (x1 - x0 > -q || x1 - x0 < q) {
				cout << "x1为：" << x1 << endl;
				break;
			}
			else {
				continue;
			}
		} while (1);
	}
	return 0;
}
