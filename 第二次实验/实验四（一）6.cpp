#include<iostream>
using namespace std;
void counts(const char s[], int counts[]) 
{
	int i = 0;
	int j = 0;
	for(j;j<26;j++)
		counts[j] = 0;
	while (s[i] != '\0')
	{
		char c = s[i];
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
			char upper_c = (c >= 'a' && c <= 'z') ? (c - 32) : c;
			int index = upper_c - 'A';
			counts[index]++;
		}i++;
	}
}
int main()
{
	int count[26];
	const int Maxlong = 10000;
	char str[Maxlong];
	cout << "Enter a string:" << endl;
	cin.getline(str, Maxlong);
	counts(str, count);
	for (int a = 0;a < 26;a++)
	{
		if (count[a] > 0) {
			char x = 'a' + a;
			cout << x << ":" << count[a] <<"  times"<< endl;
		}
	}
	return 0;
}