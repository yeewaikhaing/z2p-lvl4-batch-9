#include<iostream>
using namespace std;
int main() {

    int num;
    cout<<"If you entered zero, program will terminate....\n";
    do
    {
        cout<<"\nEnter a number: ";
        cin>>num;// num = 0
        if(num < 0) { //  0 < 0
            cout<<num<<" is negative number";
        }
        else if(num > 0){ // 0 > 0
            cout<<num<<" is positive number";
        }
    } while (num != 0);// 0 != 0
    
    return 0;
}