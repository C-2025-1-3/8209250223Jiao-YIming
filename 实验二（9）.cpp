#include<iostream>
using namespace std;
int main() {
	int x;
	int sum = 0;
	const double y = 0.8;
	double avee = 0.0;
	for (x = 1;sum + x < 100;x *= 2)
	{
		sum += x;

	}
	cout << "买了苹果数量：" << sum << endl;

	avee = sum * y / x;

	cout << "平均每天花钱：" << avee << "元" << endl;


	return 0;
}