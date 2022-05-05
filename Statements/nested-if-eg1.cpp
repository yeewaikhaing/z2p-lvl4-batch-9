#include<iostream>
using namespace std;
int main() {

    int num;
    cout<<"Enter a number: ";
    cin>>num;// num = 30

    
    // 30%3 == 0 ||  -> true
    if(num%3 == 0 || num%5 == 0) {// divisilbe
        if(num%3 == 0 && num%5 == 0) { // both
            cout<<num<<" is divisible with both 5 and 3";
        }
        else { // only
            if(num%5 == 0){
                cout<<num<<" is divisible with only 5";
            }
            else {
                cout<<num<<" is divisible with only 3";
            }
        }

    }
    else { // not divislbe
        cout<<num<<" is not divisible with both 5 and 3";
    }


    return 0;
}