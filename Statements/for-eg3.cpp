#include<iostream>
using namespace std;
int main() {

    int total = 0;
    int count = 0;
    int start_num,end_num;
    
    cout<<"Enter start number: ";
    cin>>start_num;
    cout<<"Enter end number: ";
    cin>>end_num;

    for(int i = start_num; i <= end_num; i++) {
        total = total + i;
        count++;
    }

    cout<<"\nTotal = "<<total; // 55
    cout<<"\nNo of numbers: "<<count; // 10

    return 0;
}