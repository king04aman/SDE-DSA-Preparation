// Name: Program to find whether a no is power of two
// Practice: https://practice.geeksforgeeks.org/problems/power-of-2-1587115620/1
// Article: https://www.geeksforgeeks.org/program-to-find-whether-a-given-number-is-power-of-2/

#include<iostream>
using namespace std;

bool checkPowerOfTwo(int num){
    if(num <= 0)
        return false;

    int temp = num & (num - 1);
    return !temp;
}

int main(){

    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    if(checkPowerOfTwo(n))
        cout << n << " is power of two." << endl;
    else
        cout << n << " is power not of two." << endl;

    return 0;
}
