#include<iostream>
using namespace std;

void checkEvenOrOdd(int num) {// num = 751 num is formal parameter
    if(num%2)// 153%2 
        cout<<num<<" is odd number";
    else
        cout<<num<<" is even number";
    
    cout<<"\n";
}

int main() {
    int num1 = 153, num2 = 844, num3 = 751;

    // num1
    checkEvenOrOdd(num1);// 153 num1 is actual (binding)
    //num2
    checkEvenOrOdd(num2);// 844 num2 is acutal
    //num3
    checkEvenOrOdd(num3);// 751 num3 is actual

    // sytax
    // funName();
}