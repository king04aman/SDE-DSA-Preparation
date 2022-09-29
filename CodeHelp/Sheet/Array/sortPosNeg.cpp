//Name: Move all the negative elements to one side of the array
//Practice: https://practice.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1
//Article: https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/


#include<iostream>
using namespace std;

void movePositiveNegative(int *arr, int size){
    int start = 0, mid = 0, end = size -1;

    while(mid < end){
        if(arr[mid] < 0){
            swap(arr[start++], arr[mid++]);
        }
        else if(arr[mid] > 0){
            swap(arr[mid], arr[end--]);
        }
    }
}

void print(int *arr, int size){
    for(int i=0; i<size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main(){
    int arr[9] = {-9,8,5,-2,9,-3,-89,5,8}, n = 9;

    cout << "Original Array: " << endl;
    print(arr, n);

    movePositiveNegative(arr, n);
    
    cout << "After Moving Negative and Positive: " << endl;
    print(arr, n);

    return 0;
}