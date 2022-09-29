#include<iostream>
using namespace std;


int countSetBit(int n){
    int cnt = 0;

    while(n){
        if(n & 1)
            cnt++;
        n >>= 1;
    }
    return cnt;
}

int main(){
    int n;

    cout << "Enter a number:" << endl;
    cin >> n;

    cout << "Total Number of setbit in " << n << " is : " << countSetBit(n) << endl;

    return 0;
}