#include<iostream>
#include<cmath>
using namespace std;
int main() {
	char Y;
	double a, b;
	double sum;
	cout << "输入表示式：";
	cin >> a >> Y >> b;
	switch (Y) {
	case'+':
		sum = a + b;
		cout << sum << endl;
		break;
	case'-':
		sum = a - b;
		cout << sum << endl;
		break;

	case'*':
		sum = a * b;
		cout << sum << endl;
		break;
	case'/':
		sum = a / b;
		if (b == 0) {
			cout << "0不能做除数，错误" << endl;
		}
		else {
			cout << sum << endl;
		}
		break;
	case'%':
		if (b == 0) {

			cout << "0不能做除数，错误" << endl;
		}
		else {
			int x = static_cast<int>(a);
			int y = static_cast<int>(b);
			sum = x % y;
			cout << sum << endl;
		}
		break;
	default:
		cout << "算法错误" << endl;
		break;
	}
	system("pause");
	return 0;
}