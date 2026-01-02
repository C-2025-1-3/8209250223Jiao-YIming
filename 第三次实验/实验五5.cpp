//设有一描述坐标点的类Point，其私有变量x和y代表一个点的(x, y)坐标值。
//请编写程序实现以下功能：利用构造函数传递参数，在定义对象时将x、y坐标值初始化为（60, 80）；
//利用公有成员函数void setPoint(int i, int j)将坐标值修改为(60 + i, 80 + j)；
//利用公有成员函数display()输出修改后的坐标值。主函数中通过定义对象，验证各个函数。
#include<iostream>
using namespace std;
class Point
{
private:
	int x=60;
 int y = 80;
public:
	Point() {
		x = 60;
		y = 80;
	}
	void setPoint(int i, int j)
	{
		x= i + 60;
		y= 80 + j;
	}
	void display() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main() {
	Point p;
	cout << "修改前的坐标:" ;
	p.display();
	cout << "修改后的坐标:";
	p.setPoint(10, 20);
	p.display();
	cout << "再次修改后的坐标:";
	p.setPoint(-3, 23);
	p.display();
	return 0;
}