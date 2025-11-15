#include <iostream>
using namespace std;
int main() {
	char ch;
	cin >> ch;
	if (ch >= 'a' && ch <= 'z') {
		cout << char(ch - 32);
	}
	else {
		cout << (int)ch << endl;
	}
	return 0;
}