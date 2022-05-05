#include<iostream>
using namespace std;

int main() {
    string uname,upass;

    

    user_input:
    cout<<"Enter user name: ";
    cin>>uname; // mmit
    cout<<"Enter user password: ";
    cin>>upass; // 123
    // "mmit" != "mmit" || "123" != "123"
    if(uname != "mmit" || upass != "123") {
        //goto user_input;
        return 1;
    }
    cout<<"\nLogin Success.....";
    return 0;
}