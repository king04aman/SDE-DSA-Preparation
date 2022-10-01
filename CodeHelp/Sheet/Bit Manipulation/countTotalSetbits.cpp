// Name: Count total set bits in all numbers from 1 to n
// Practice: https://practice.geeksforgeeks.org/problems/count-total-set-bits-1587115620/1
// Article: https://www.geeksforgeeks.org/count-total-set-bits-in-all-numbers-from-1-to-n/

#include<iostream>
using namespace std;

int getSetBits(int num){
    int count = 0;
    if(num <= 0)
        return count;
    
    while(num != 0){
        if(num & 1)
            count++;
        num = num >> 1;
    }
    return count;
}

int main(){
    
    int n, count=0;
    cout << "Enter a number:" << endl;
    cin >> n;

    for(int i=1; i<n; i++){
        count += getSetBits(i);
    }

    cout << "Total setbits from 1 to " << n << " is " << count << endl;

    return 0;
}