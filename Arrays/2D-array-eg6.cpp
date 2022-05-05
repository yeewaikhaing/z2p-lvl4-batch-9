#include<iostream>
using namespace std;

int main() {

    float prices[2][2] = {
        {1200.9, 450},
        {1300, 1600}
    };
    cout<<"\n _____ price list ____\n";
    for(int r = 0; r < 2;r++) {//row
        for(int c = 0; c < 2;c++) {// col
            cout<<prices[r][c]<<"\t";
        }
        cout<<"\n";

    }
    // find max price
    float max_price = prices[0][0];// max_price = 1200.9
    for(int r = 0; r < 2;r++) { // r = 2 < 2
        for(int c = 0; c < 2;c++) { // c = 2 < 2
            if(max_price < prices[r][c]) // 1300 < [1][1] (1600)
                max_price = prices[r][c];// max_price =1600
        }
    }
    cout<<"\nMaximum price: "<<max_price;// 1600
    return 0;
}