#include<iostream>
using namespace std;


int findMax(int a, int b = 50) {// a= 300, b = 100
    return (a < b) ? b : a; // 300 < 100 : 300
}

int main() {

    int n1,n2;
    cout<<"Enter number1: ";
    cin>>n1; // n1 = 300
    cout<<"Enter number2: ";
    cin>>n2; // n2 = 100

    cout<<"Maxiumn number is "<<findMax(n1,n2);//(300)

    

}

