#include<iostream>
using namespace std;
bool is_prime(int num)
{
	int temp = 0;
	for (i = 1;i < num / 2;i++) {
		temp = num % i;
		if (temp==0) {
			cout << num << endl;		
			return true;
		}
	}
	
}
int main()
{
	for (int j = 0;j < 100;j++)
	{
		is_prime(j);
	}
	return 0;
}