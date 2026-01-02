#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	void SetTime() {
		cin >> hour >> minute >> sec;
	}
	void ShowTime() {
		cout << hour << ":" << minute << ":" << sec;
	}
};
int main()
{
	Time tl;     
	tl.SetTime();
	tl.ShowTime();
	return 0;
}
