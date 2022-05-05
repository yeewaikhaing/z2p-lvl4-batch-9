#include<iostream>
using namespace std;
class Account {
    // data
    public:
        string account_holder;
        string account_no;
        int balance;
    // functions
    //holder = "Jeon", no = "123456789", initAmt = 200000 
    void createAccount(string holder, string no, int initAmt = 1000) {
        account_holder = holder;
        account_no = no;
        balance = initAmt;
    }
    void deposit(int amount) {// amount = 300000
        balance = balance + amount;// bal = 200000 + 300000
    }
    bool withdraw(int withdraw_amt) {// withdraw_amt = 300000
        if(balance < withdraw_amt)// 500000 < 300000
            return false;
        else {
            balance = balance - withdraw_amt;// bal = 500000 - 300000 = 200000;
            return true;
        }
    }
    void showData() {
        cout<<"\n------- Current Info ------\n\n";
        cout<<"Holder: " <<account_holder;
        cout<<"\nNo: "<<account_no;
        cout<<"\nCurrent Balance: "<<balance<<" ks.";
    }

};
int main() {

    Account acc1 = Account();
    acc1.createAccount("Jeon", "123456789", 200000);

    acc1.showData();
    acc1.deposit(300000);
    cout<<"\n----- After deposit(300000ks)----\n";
    cout<<"Current Balance: "<<acc1.balance<<"ks.";

    bool result = acc1.withdraw(600000);// result = false
    cout<<"\n------ Withdraw (600000ks)----";
    if(result == 0) {// 0 == 0
        cout<<"\nSorry, not enough!";
        cout<<"\nCurrent Balance: "<<acc1.balance<<"ks.";
    }
    else {//
        cout<<"\n------ withdraw success -----\n";
        cout<<"Current balance: "<<acc1.balance<<"ks.";
    }

    result = acc1.withdraw(300000);
    cout<<"\n ------ Withdraw(300000 ks)------\n";
    if(result == 0) {// 1 == 0
        cout<<"\nSorry, not enough!";
        cout<<"\nCurrent Balance: "<<acc1.balance<<"ks.";
    }
    else {//
        cout<<"\n------ withdraw success -----\n";
        cout<<"Current balance: "<<acc1.balance<<"ks.";
    }
}