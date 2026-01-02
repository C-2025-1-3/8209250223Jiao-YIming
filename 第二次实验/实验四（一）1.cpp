#include<iostream>
using namespace std;
int main()
{
    int putnum[10];
    int distinnum[10];
    int discount = 0;
    for (int i = 0;i < 10;i++) {
        cin >> putnum[i];
    }
    for (int i = 0;i < 10;i++) {
        bool isdistinct = false;
        for (int j = 0;j < discount;j++) {
            if (putnum[i] == distinnum[j]) {
                isdistinct = true;
                break;
            }
        }
            if(!isdistinct) {
                distinnum[discount] = putnum[i];
                discount++;
            }
        }
        for (int m = 0;m < discount;m++) 
            cout << distinnum[m] << " ";
        return 0;
}