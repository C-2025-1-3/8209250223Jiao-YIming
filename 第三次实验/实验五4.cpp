#include<iostream>
using namespace std;
class Student {
public:
	string id;
	int score;
	Student(string id_,int score_):id(id_),score(score_){}
};
void max(Student* arr, int len)
{
	if (len <= 0)
		return;
	for (int i = 0;i < len - 1;i++)
	{
		for (int j = 0;j < len - i - 1;j++)
		{
			if ((arr + j)->score < (arr + j + 1)->score) {
				int temp = (arr + j)->score;
				(arr + j)->score = (arr + j + 1)->score;
				(arr + j + 1)->score = temp;
			}
		}
	}
	int arrmax = arr->score;
	cout << "最大值为：" << arrmax;
}
int main() {
	int len = 5;
	Student stuArr[5] = {
		Student("2024001", 85),
		Student("2024002", 92),
		Student("2024003", 78),
		Student("2024004", 98),
		Student("2024005", 88)
	};
	max(stuArr, 5);
}
