#include<iostream>
using namespace std;
int main() {

    char ch;
    cout<<"If you entered 'q', program will termiinate...\n";

    do
    {
       cout<<"\nEnter a single character: ";
        cin>>ch; // ch = 'q'

        if(ch >= '0' && ch <= '9') { // ch >= 48 && ch <= 57
            cout<<ch<<" is digit";
        }
        else {
            cout<<ch<<" is not digit";
        }
    } while (ch != 'q');// 'q' != 'q'
    
    return 0;
}