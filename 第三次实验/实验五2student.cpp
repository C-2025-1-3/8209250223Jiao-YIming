#include <iostream>
#include<cstring>
using namespace std;
#include"ÊµÑéÎå2student.h"      
void Student::set_value(int n, const char* na, char s) {
    num = n;
    strcpy_s(name, na);
    sex = s;
}
void Student::display()
{
    cout << "num£º" << num << endl;
    cout << "name£º" << name << endl;
    cout << "sex£º" << sex << endl;
}
