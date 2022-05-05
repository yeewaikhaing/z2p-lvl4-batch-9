#include<iostream>
using namespace std;
int main() {
    int num = 6;// num = 6543234(C++)/ num = 0 (other langs)
    cout<<"If you entered zero, program will terminate...\n";
    for(int i = 0; (num != 0); i++)// i = 0; 6 != 0; i = 1; 8 != 0; i = 2; -7 != 0; i = 3; 0 != 0
    {
        cout<<"\nEnter a number: ";
        cin>>num;// num = 0
        if(num < 0) { //  0 < 0
            cout<<num<<" is negative number";
        }
        else if(num > 0){ // 0 > 0
            cout<<num<<" is positive number";
        }
    }
    

    return 0;
}