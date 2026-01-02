#include<iostream>
using namespace std;
int main() {
	int num = 1;
	for (int i = 1;i <= 9;i++) {
		num = (num + 1) * 2;
	}
	cout << "一共有桃子：" << num <<"个" << endl;
}