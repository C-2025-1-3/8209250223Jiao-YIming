#include<iostream>
using namespace std;
int main()
{
	const double P = 3.14159;
	double volume;
	double x, y;
	cout << "请分别输入圆锥底的半径和锥高：" << endl;
	cin >> x >> y;
	volume = (1.0 / 3.0) * P * x * x * y;
	cout << "圆锥的体积为：" << volume << endl;
	return 0;
}