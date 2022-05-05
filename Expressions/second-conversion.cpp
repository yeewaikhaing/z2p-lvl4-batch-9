#include<iostream>
using namespace std; 

int main() {
    int totalSec;
    cout<<"Enter total second: ";
    cin>>totalSec;// totalSec = 3669

    // hr = 3669/3600 = 1
    int hr = totalSec/3600; // convert hr
    // remain_sec = 3669%3600 = 69
    int remain_sec = totalSec%3600; // get remaing sec
    // min = 69/60 = 1
    int min = remain_sec/60; // convert remaining sec to min
    // remain_sec = 69%60 = 9
    remain_sec = remain_sec%60;// sec

    cout<<"Hour: " << hr;//1
    cout<<"\nMinute: "<< min;//1
    cout<<"\nSecond: "<<remain_sec;//9

    return 0;
}