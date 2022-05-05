#include<iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num; // num = 30

   if(num%5 == 0 && num%3 == 0) {// 22%5 == 0 && 20%3 == 0 
        cout<<num<<" is divisible with both 5 and 3";
    }
    if(num%5 == 0) {// 30%5 == 0
        cout<<num<<" is divisible with only 5";
    }
    else if(num%3 == 0) { // 22%3 == 0
        cout<<num<<" is divisible with only 3";
    }
    else {
        cout<<num<<" is not divisible with both 5 and 3";
    }
    return 0;
}