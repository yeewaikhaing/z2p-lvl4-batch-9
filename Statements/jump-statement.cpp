#include<iostream>
using namespace std;
int main() {

    int i = 0; label_name: while (i < 10){i++;if(i == 4) {continue;}cout<<"Statement "<<i<<"\n"; }  cout<<"\n-------- End -------\n";return 0;
}