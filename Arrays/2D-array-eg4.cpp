#include<iostream>
using namespace std;
int main() {

    int num[2][2];

    // assign
    for(int i = 0; i < 2;i++) {// row
        for(int j = 0; j < 2;j++) {// col
            cout<<"Enter value: ";
            cin>>num[i][j];
        }
    }
    // calculate total and count
    cout<<"\n______ All Elements ______\n";
    int total = 0, count = 0;
    for(int i = 0; i < 2;i++) {// row
        for(int j = 0; j < 2;j++) {// col
            cout<<num[i][j]<<"\t";
            total = total + num[i][j];
            count++;
        }
        cout<<"\n";
    }
    // display
    cout<<"\nTotal value: "<<total;// 260
    cout<<"\nNumber of numbers: "<<count; // 4
    return 0;
}