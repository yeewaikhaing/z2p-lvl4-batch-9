#include<iostream>
using namespace std;
int addNumbers(int a, int b = 7, int c = 19) {// a = 100 , b = 200
    return (a + b + c); // 100 + 7 + 17
}

void display() {

}
void display() {

}
int main() {
    int n1,n2,n3;
    cout<<"Enter three numbers: ";
    cin>>n1>>n2>>n3;

    cout<<"\n1 args passed: " << addNumbers(n1);// 100
    cout<<"\n2 args passed: " << addNumbers(n1,n2);
    cout<<"\n3 args passed: " <<addNumbers(n1, n2, n3);

    //equal()

}