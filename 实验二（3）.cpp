#include <iostream>
using namespace std;
int main() {
	double x, y, z;
	cout << "请分别输入三角形的三边长：";
	cin >> x >> y >> z;
	double C;
	C = x + y + z;
	if (x + y > z && x + z > y && z + y > x) {
		if (x == y || z == x || y == z) {
			cout << "可以构成等腰三角形且周长为：" << C << endl;
		}
		else {
			cout << "可以构成三角形且周长为：" << C << endl;
		}
	}
	else {

		cout << "不能构成三角形" << endl;
	}

	return 0;
}