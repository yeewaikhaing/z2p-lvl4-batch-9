#include<iostream>
using namespace std;
class Product {
    private:
        string name;
        int barCode;
        int price;
    public:
        Product() {

        }
        Product(int code, string name, int price) {
            setBarCode(code);
            setName(name);
            setPrice(price);
        }
        void setBarCode(int code) {// code = 2222
            if(code >= 1000 && code <= 9999)
                this->barCode = code;
            else {
                this->barCode = 0;
                cout<<"\nIncorrect Bar Code number";
            }
        }
        int getBarCode() {
            return barCode;
        }
        void setName(string input) {// input = Juice
            name = input;
        }
        string getName() {
            if(name == "")
                return "Name is empty!";
            else
                return name;
        }
        void setPrice(int pPrice) {// pPrice = 1000
            if(pPrice < 100) {
                price = 0;
                cout<<"Price must be at least 100ks\n";
            }
            else
                price = pPrice;
        }
        int getPrice() {
            return price;
        }
        void showData() {
            cout<<"\n----- Product Data ------\n";
            cout<<"BarCode: "<<getBarCode()<<"\n";
            cout<<"Name: "<<getName()<<"\n";
            cout<<"Price: "<<getPrice()<<"ks";
        }
};
int main() {
    Product p1 = Product();
    string p_name;
    int p_code;
    int p_price;

    cout<<"enter name: ";
    cin>>p_name; // p_name = "Juice"

    p1.setName(p_name);

    cout<<"\nenter bar code: ";
    cin>>p_code;// 100

    p1.setBarCode(p_code);//100

    cout<<"\nenter price: ";
    cin>>p_price;// 50

    p1.setPrice(p_price);//50

    p1.showData();
}