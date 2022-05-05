#include<iostream>
using namespace std;
class Shoe {
    // data
    private:
        int id;
        string name;
        string brand;
        int price;
        string color;
        string shoe_size;
    // constructor
    public:
        Shoe() {

        }
        //2222,"High Heel","Lily"
        Shoe(int id, string name, string brand) {
            this-> id = id;
            this->name = name;
            this->brand = brand;
        }
        //id = 3333, name = "Adidas", brand = "Leather Sneaker",100000, "30","purple"
        Shoe(int id, string name, string brand, int price, string shoe_size, string color) {
            this-> id = id;
            this->name = name;
            this->brand = brand;
            this->price = price;
            this->shoe_size = shoe_size;
            this->color = color;
        }
    // methods
        void initData(int id, string name, string brand, int price, string shoe_size, string color) {
            this-> id = id;
            this->name = name;
            this->brand = brand;
            this->price = price;
            this->shoe_size = shoe_size;
            this->color = color;
        }
        void showData() {
            cout<<"\n";
            cout<<id<<"\t ";
            cout<<name<<"\t ";
            cout<<brand<<"\t ";
            cout<<shoe_size<<"\t";
            cout<<color<<"\t";
            cout<<price<<"ks. \n";
        }
};
int main() {
    Shoe s1 = Shoe();// 0 ars constructor
    s1.initData(1111,"Hiking Book","Nike",55000,"33","black");
    Shoe s2 = Shoe(2222,"High Heel","Lily"); // 3 args constructor
    Shoe s3 = Shoe(3333, "Adidas", "Leather Sneaker",100000, "30","purple");

    cout<<"\nCode\t Name\t Brand\t Size\t Color\t Price\n";
    cout<<"-----------------------------";
    s1.showData();
    s2.showData();
    s3.showData();
}