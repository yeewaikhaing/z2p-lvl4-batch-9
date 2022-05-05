#include<iostream>
using namespace std;
int main() {

    int time;
    cout<<"Enter current time: ";
    cin>>time;
    // 20 < 10 : (20 < 20 ) :
    string result = (time < 10) ? "Good Morning" : ((time < 20) ? "Good day" : "Good Evening");

    cout<<result;
    return 0;
}