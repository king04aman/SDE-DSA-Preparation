//Name: Reverse the array
//Practice: https://practice.geeksforgeeks.org/problems/reverse-an-array/0
//Article: https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/


#include<iostream>
using namespace std;

void reverse(int *arr, int size){
    int start = 0, end = size - 1;

    while(start < end)
        swap(arr[start++], arr[end--]);

}

void print(int arr[], int size){
    for(int i=0; i<size; i++)
        cout << arr[i] << " ";    
    cout << endl;
}

int main(){

    int arr[6] = {1,2,3,4,5,6}, n = 6;

    cout << "Original Array: " << endl;
    print(arr, n);

    reverse(arr,n);

    cout << "Reversed Array: " << endl;
    print(arr, n);

    return 0;
}
