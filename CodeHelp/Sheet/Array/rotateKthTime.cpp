// Name: Rotate an array k times.
// Practice: 
// Article: 


#include<iostream>
using namespace std;

void rotateArray(int *arr, int size, int k){
    int temp[size] = {0};

    for(int i=0; i<size; i++){
        temp[(i+k)%size] = arr[i];
    }

    for(int i=0; i<size; i++)
        arr[i] = temp[i];
}

void print(int arr[], int size){
    for(int i=0; i<size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main(){
    int arr[5] = {1,2,3,4,5}, n = 5, k = 3;

    cout << "Original Array: " ;
    print(arr, n);

    rotateArray(arr, n, k);

    cout << "After Rotating Array: ";
    print(arr, n);

    return 0;
}