#include<iostream>
using namespace std;
string brands[5];
int val = 0;
// init
void addBrand(string name) {// name = Oppo
    brands[val] = name;//[0] = Samsung,[1] = iPhone,[2] = Vivo,[3] = Mi,[4] = Oppo
    val++;//index = 5
}
// display
void showData() {
    cout<<"\n------ All Brand ------\n";
    for(int i = 0; i < 5;i++)
        cout<<brands[i]<<"\n";
}
int main() {
    addBrand("Samsung");
    addBrand("iPhone");
    addBrand("Vivo");
    addBrand("Mi");
    addBrand("Oppo");

    showData();
}