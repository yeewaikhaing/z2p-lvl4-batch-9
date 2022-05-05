#include<iostream>
using namespace std;
int main() {
    int num1 = 25;
    float num2;

    num2 = num1; // int -> float (internal conversion)

    cout<<"Num2 = "<<num2;

    num1 = (int)4.5; // float ->int (external convertion)
    cout<<"\nNum1 = "<<num1;

    int a = 3.5 + 2;
    return 0;
}