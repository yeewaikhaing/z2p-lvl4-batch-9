#include<iostream>
using namespace std;
class Person {
    private:
        string name;
    public:
        void getData() {
            cout<<"\nName: ";
            getline(cin,name);
        }
        void display() {
            cout<<"\nName: "<<name; // Aung aung
        }
};
class Employee : public Person {
    private:
        string company;
        int salary;
    public:
        void getData() {// override
            Person::getData();
            cout<<"Company name: ";
            cin>>company;
            cout<<"Salary: ";
            cin>>salary;
            cin.ignore();
        }
        void display() { // overrid
            Person::display();
            cout<<"Company name: "<<company; // mmit
            cout<<"\nSalary: "<<salary; // 600000
        }
};
class Programmer : public Employee {
    private:
        string skillset;
    public:
        
        void getData() {// override
            Person::getData();
            cout<<"Enter skill set: ";
            getline(cin, skillset);
        }
        void display() {// override
            Employee::display();
            cout<<"Skillset: "<<skillset; // php...
        }
};
int main() {
    Programmer obj = Programmer();
    cout<<"fill your information\n";
    obj.getData();
    cout<<"\n----- Profile ------\n";
    obj.display();
}