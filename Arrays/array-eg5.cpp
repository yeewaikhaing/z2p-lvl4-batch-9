#include<iostream>
using namespace std;
int main() {
    int len = 3;
    int numbers[3] = {7, 9, 13}; 

    cout<<"\n_____ From first element_____\n";
    for(int i = 0; i < len;i++)
        cout<<numbers[i];
        cout<<"\t";
    
    cout<<"\n___ From last element ___\n";
    for(int i = (len - 1); i >= 0; i--)
        cout<<numbers[i]<<"\t";
    
    return 0;
}