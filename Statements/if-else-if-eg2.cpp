#include<iostream>
using namespace std;
int main() {
    int age;
    cout<<"Enter your age: ";
    cin>>age;// age = 75

    if(age < 60) { // 75 < 60
        cout<<"You are pretty young";
    }
    else if(age == 60) { // 75 == 60
        cout<<"You are old";
    }
    else if(age > 60) { // 75 > 60
        cout<<"You are really old";
    }

    return 0;
}