#include<iostream>
#include"mytemperature.h"
#include<iomanip>
using namespace std;
int main()
{
	while (true) {
		double cel, fah;
		cout << "输入摄氏温度：";
		cin >> cel;
		fah = celsius_to_fah(cel);
		cout << "对应的华氏温度为：" << fixed << setprecision(1) << fah << endl;
		cout << "输入华氏温度：";
		cin >> fah;
		cel = fahrenheit_to_cels(fah);
		cout << "对应的摄氏温度为：" << fixed << setprecision(1) << cel << endl;
	}
}