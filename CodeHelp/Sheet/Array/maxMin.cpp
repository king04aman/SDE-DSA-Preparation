//Name: Find the maximum and minimum element in an array
//Practice: https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/
//Article: https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1


#include<iostream>
using namespace std;

int getMax(int *arr, int size){
    int ans = INT_MIN;

    for(int i=0; i<size; i++){
        if(ans < arr[i])
            ans = arr[i];
    }
    return ans;
}

int getMin(int *arr, int size){
    int ans = INT_MAX;

    for(int i=0; i<size; i++){
        if(ans > arr[i])
            ans = arr[i];
    }
    return ans;
}

int main(){

    int arr[6] = {4,5,2,6,7,3}, n=6;

    cout << "Maximum element in array: " <<  getMax(arr, n) << endl;
    cout << "Minimum element in array: " <<  getMin(arr, n) << endl;

    return 0;
}