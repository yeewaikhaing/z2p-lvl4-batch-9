#include<iostream>
using namespace std;
int main() {
    int num;
    string result;

    cout<<"Enter a number: ";
    cin>>num; // num = 21

    // 21%2 == 0 => "odd"
   string result = (num%2 == 0) ? "even" : "odd";
   cout<<num<<" is "<<result;
    return 0;
}