#include<iostream>
using namespace std;
int main() {
    float bmi;
    cout<<"Enter your bmi value: ";
    cin>>bmi; // bmi = 32

    if(bmi < 18.5 ) { // 32 < 18.5
        cout<<"underweight";
    }
    else { // 3 options
        if(bmi >= 18.5 && bmi <= 24.9) { // 32 >= 18.5 && 32 <= 24.5
            cout<<"Normal weight";
        }
        else {// 2 options
            if(bmi >= 25 && bmi <= 29.9) { // 32 >= 25 && 32 <= 29.9
                cout<<"Overweight";
            }
            else {
                cout<<"Obesity";
            }
        }
    }
    return 0;
}