//Name: Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo
//Practice: https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
//Article: https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/


#include<iostream>
using namespace std;

void sort012(int *arr, int size){
    int start = 0, mid = 0, end = size -1;
    
    while(mid < end){
        if(arr[mid] == 0){
            swap(arr[start++], arr[mid++]);
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else if(arr[mid] == 2){
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
    int arr[9] = {0,1,2,2,0,1,0,2,1} , n = 9;

    cout << "Original Array: " << endl;
    print(arr, n);

    sort012(arr, n);

    cout << "After Sorting: " << endl;
    print(arr, n);

    return 0;
}