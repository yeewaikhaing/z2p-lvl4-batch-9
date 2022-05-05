#include<iostream>
using namespace std;
int main() {
    int s_num, e_num;

    cout<<"Enter start number: ";
    cin>>s_num; // s_num = 1
    cout<<"Enter end number: ";
    cin>>e_num; // e_num = 6

    cout<<"Odd numbers between "<<s_num<<" and "<<e_num<<"\n";
    for(int i = s_num; i <= e_num; ++i) {
        if(i%2 == 1) {
            cout<<i<<"\n";
        }
    }
    return 0;
}