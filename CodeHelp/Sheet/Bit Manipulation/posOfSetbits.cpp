// Name: Find position of the only set bit
// Practice: https://practice.geeksforgeeks.org/problems/find-position-of-set-bit3706/1
// Article: https://www.geeksforgeeks.org/find-position-of-the-only-set-bit/

#include<iostream>
using namespace std;

int getPosOfSetBit(int num){
    int count = 0;

    if((num < 0) || (num & (num - 1) != 0)){
        return count;
    }
    
    while(num != 0){
        count++;
        num = num >> 1;
    }
    return count;
}

int main(){

    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    cout << "Setbit at position: " <<  getPosOfSetBit(n) << endl;

    return 0;
}