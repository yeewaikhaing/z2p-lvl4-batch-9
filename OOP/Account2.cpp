#include<iostream>
using namespace std ;
class Account {
    // data
    private:
        string account_holder;
        string account_no;
        int balance;
    // methods
    public: // constructor
    //holder = "Jk", no = "87654321", amt = 600000
        Account(string holder, string no, int balance) { // constructor
            account_holder = holder;
            this->account_no = no;
            this->balance = balance;
        }
        Account() { // constructor

        }
    //holder = "Jeon", no = "12345678", amt = 500000
        void initializeData(string holder, string no, int amt) {
            this->account_holder = holder;
            this->account_no = no;
            this->balance = amt;
        }
        void showData() {
            cout<<"\n----- Account Info ------\n\n";
            cout<<"Name: "<<this->account_holder;
            cout<<"\nNumber: "<<this->account_no;
            cout<<"\nCurrent Balance: "<<this->balance<<" ks";
        }
};

int main() {
    //Student s1 = Student(1);

    Account acc1 = Account(); // using 0 arg constructor
    acc1.initializeData("Jeon", "12345678", 500000);
    acc1.showData();

    cout<<"\n------- Another Account ------\n\n";
    Account acc2 = Account("Jk", "87654321", 600000); // using 3 args constructor
    acc2.showData();
}
// class Student {
//     private:
//         int rno;
//         string name;
//     public:
//         Student(int rno) {
//             this->rno = rno;
//         }
//     public: void showData() {
//         cout<<"Rno: "<<rno;
//     }
// };