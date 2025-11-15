#include <iostream>
using namespace std;
int main() {
	double F, C;
	cout << "请输入华氏温度";
	cin >> F;
	C = (5.0 / 9.0) * (F - 35);
	cout << "该华氏温度转化为摄氏度：" << C << endl;
	return 0;
}