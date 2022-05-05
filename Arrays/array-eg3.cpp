#include<iostream>
using namespace std;
int main() {

    int marks[3] = {100 ,50, 90};
    // loop
    for(int i = 0; i < 3; i++) {
        cout<<marks[i]<<"\n";
    }
    string names[3] = {"Aung Aung", "Su Su", "Cherry"};
    // loop
    cout<<"\n_____ Name List _____\n";
    for(int i = 0; i < 3; i++) {
        cout<<names[i]<<"\n";
    }
    // 
    cout<<"\n______ Name with marks ____\n";
    for(int i = 0; i < 3;i++) {// i = 2 < 3
        cout<<names[i]<<" got "<<marks[i]<<" marks.\n";
        // Aung Aung got 100 marks
        // su su got 50 marks
        // cherry got 90 marks.
    }
    return 0;
}