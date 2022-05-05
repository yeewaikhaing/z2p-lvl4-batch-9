#include<iostream>
using namespace std;
int main() {
    float bmi;
    cout<<"Enter bmi value: ";
    cin>>bmi; // bmi = 31

    if(bmi < 18.5) { // 31 < 18.5
        cout<<"Underweight";
    }
    else if(bmi >= 18.5 && bmi <= 24.9) { // 31 >= 18.5 && 31 <= 24.9
        cout<<"Normal weight";
    }
    else if(bmi >= 25 && bmi <= 29.9) { // 31 >= 25 && 31 <= 29.9
        cout<<"Overweight";
    }
    else {
        cout<<"Obesity";
    }
    return 0;
}