#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	unsigned int testUnint = 65534;
	cout << "output in Oct unsigned int type:" << oct << testUnint << endl;      //八进制
	double x;
	cout << "请输入一个实数:";
	cin >> x;
	int Intx = static_cast<int>(x);
	cout << "该实数转化为整数：" << Intx << endl;
	system("pause");
	return 0;
}