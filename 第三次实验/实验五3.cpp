#include<iostream>
using namespace std;
class volume {
private:
	int length;
	int height;
	int width;
public:
	void inputMeta()
	{
		cin >> length >> width >> height;
	}
	void result()
	{
		cout << "Ìå»ýÎª" << length * width * height<<endl;
	}
};
int main()
{
	volume V1;
	volume V2;
	volume V3;
	V1.inputMeta();
	V1.result()
	V2.inputMeta();	
	V2.result();
	V3.inputMeta();
	V3.result();
}