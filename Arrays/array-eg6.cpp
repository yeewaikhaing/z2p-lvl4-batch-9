#include<iostream>
using namespace std;
int main() {
    int len = 3;
    int numbers[3] = {13, 21, 19};

    cout<<"\n____ All Elements ____\n";
    for(int i = 0;i < len;i++) {
        cout<<numbers[i]<<"\t";
    }

    // assume
    int max_num = numbers[0]; // max_num = 13
    for(int i = 1; i < len;i++) {// i = 3 < 3;
        if(max_num < numbers[i]){ // 21 < n[2] (19)
            max_num = numbers[i]; // max_num = 21
        }
    }
    cout<<"\nMaximum number: "<<max_num;//21
}