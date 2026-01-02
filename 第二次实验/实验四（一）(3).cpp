#include<iostream>
using namespace std;
int main() {
	bool dor[100];
	int count = 1;
	for (int i = 0;i < 100;i++)
		dor[i] = false;
	for (count;count <= 100;count++)
	{
		for (int j = count;j <= 100;j += count)
		{
			dor[j - 1] = !dor[j - 1];
		}
	}
	count = 1;
	cout << "×îáá´òé_µÄ™™Ì–žé:";
	while (count <= 100)
	{
		if (dor[count - 1] == true)
			cout << count << " ";
		count++;
	}
	return 0;
}