#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num; // num = 9

    if(num >= 0 &&  num <= 9) {// 9 >= 0 && 9 <= 9 -> true
        cout<<"You enter one digit";
    }
    return 0;
}