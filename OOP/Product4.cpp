#include<iostream>
using namespace std;
class Product {
    private:
        int barCode;
        string name;
    public:
        Product() {

        }
    //getter/seter
    bool setBarCode(int code) {// code = 9999
        if(code >= 1000 && code <= 9999) {
            barCode = code;
            return true;
        }
        else
            return false;
    }
    int getBarCode() {
        return barCode;
    }
    void setName(string name) {// name = Coffee
        this->name = name;
    }
    string getName() {
        return name;
    }
    void showData() {
        cout<<"\n------ Information ------\n";
        cout<<"Barcode: "<<barCode;
        cout<<"Name: "<<getName();
    }
};
int main() {
    int pCode;
    string pName;
    Product p = Product();
    cout<<"Enter barcode:";
    cin>>pCode;

    bool result = p.setBarCode(pCode);//500
    while(!result) {// !true = false
        cout<<"\nEnter valid barcode(1000 ~ 9999): ";
        cin>>pCode;

        result = p.setBarCode(pCode);//9999
    }
    cout<<"\nEnter name: ";
    cin>>pName;

    p.setName(pName);//Coffee
    p.showData();
}