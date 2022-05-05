#include<iostream>
using namespace std;

void changeValue(int val) {// int val = 10
    val = val + 20;// val = 10 + 20 = 30
    cout<<"\nValue inside function: "<<val;// 30
}
void changeAnother(int *val) { //*val -> &num;
    *val = *val + 20; // *val = 10 + 20 = 30
    cout<<"\nValue inside function: "<<(*val);
}
int main() {

    int num = 10;
    cout<<"Before calling func, num =" <<num;// 10
    changeValue(num);
    cout<<"\nAfter calling funcc, num = "<<num; // 10

    int num1 = 10;
    cout<<"\n\nBefore calling func, num1 = "<<num1;
    changeAnother(&num1);
    cout<<"\nAfter calling func, num1 = "<<num1;

}