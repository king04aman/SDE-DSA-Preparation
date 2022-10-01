// Name: Count number of bits to be flipped to convert A to B
// Practice: https://practice.geeksforgeeks.org/problems/bit-difference-1587115620/1
// Article: https://www.geeksforgeeks.org/count-number-of-bits-to-be-flipped-to-convert-a-to-b/

#include<iostream>
using namespace std;

int flipBits(int num){
    int n= num, mask = 0;
    if(num <= 0)
        return 0;
    
    while(n!=0){
        mask = (mask << 1) | 1;
        n = n >> 1;
    }
    
    int temp = (~num) & mask;
    return temp;
}

int main(){
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    cout << "After flipping bits: " << flipBits(n) << endl;
    return 0;
}