#include<iostream>
using namespace std;
bool checkLogin(string, string);


int main() {
    string u_email, pass;
    cout<<"Enter email: ";
    cin>>u_email;// u_email = admin@gmail.com
    cout<<"Enter password: ";
    cin>>pass; // pass = 123

    //bool result = checkLogin(u_email, pass);//(admin@gmail.com,123);
    if(checkLogin(u_email, pass))//0
        cout<<"Login success";
    else
        cout<<"Login fail";

}

bool checkLogin(string email, string pass) {// email = admin@gmail.com, pass = 123

    // return false;
    return (email == "jk@gmail.com" && pass == "123") ? true : false;
}