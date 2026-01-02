#include<iostream>
using namespace std;
#include<cmath>
bool is_prime(int num)
{
	int temp = 1;
	for (int i = 2;i <= sqrt(num);i++) {
		int sq = num % i;
		if (sq == 0) {
			temp = 0;
			break;
		}
	}
	if (temp == 1) {
		return true;
	}
	else {
		return false;
	}
}
int main()
{
	int line_count = 0;
	int count = 0;
	for (int j = 2;j < 200;j++)
	{
		if (j == 2 || j == 3) {
			cout << j << " ";
			count++;
			line_count++;
			continue;
		}
		else if(is_prime(j)){
			cout << j << " ";
			count++;
			line_count++;
		}
	

		if (count % 10 == 0&&line_count!=0)
			cout << endl;
		line_count = 0;

	}
	return 0;
}