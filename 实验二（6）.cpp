#include<iostream>
using namespace std;
int fanc(int a, int b) {
	if (b == 0) return a;
	else return fanc(b, a % b);
}
int main() {
	int f, g, h, j;
	cin >> h >> j;
	f = fanc(h, j);
	g = h * j / f;
	cout << "最大公约数为：" << f << endl;
	cout << "最小公倍数为：" << g << endl;
	return 0;
}