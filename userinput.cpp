#include<iostream>
using namespace std;
int main() {
    int empNo;
    string name;
    string email;
    int salary;
    

    cout<<"------ User Input --------\n";
    
    cout<<"Enter employee no: ";
    cin>>empNo; // empNo = 101
    cin.ignore();
    
    cout<<"Enter name: ";
   // cin>>name; // name = "su su"
    getline(cin, name);

    cout<<"Enter email: ";
    cin>>email; // email = "susu@gmail.com"

    

    cout<<"Enter salary: ";
    cin>>salary; // salary = 500000

    cout<<"\n-------- User Profile ----------\n";

    cout<<"Employee no: "<<empNo;
    cout<<"\nName: "<<name;
    cout<<"\nEmail: "<<email;
    cout<<"\nSalary: "<<salary;

    return 0;
}