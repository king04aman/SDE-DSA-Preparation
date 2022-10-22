// Binary Search on unknown orded shorted array.
#include<iostream>
#include<vector>
using namespace std;

int reversebinarySearch(vector<int> &nums, int target){
    int start = 0, mid = 0, end = nums.size() - 1;

    while(start <= end){
        mid = start + (end - start) / 2;

        if(nums[mid] == target)
            return mid;

        if(nums[mid] < target)
            end = mid - 1;
        else
            start = mid + 1;
    }

    return -1;
}

int binarySearch(vector<int> &nums, int target){
    int start = 0, mid = 0, end = nums.size() - 1;

    while(start <= end){
        mid = start + (end - start) / 2;

        if(nums[mid] == target)
            return mid;
        
        if(nums[mid] < target)
            start = mid + 1;
        else 
            end = mid - 1;
    }

    return -1;
}

// Driver Code
int main()
{
    vector<int> nums{1,2,3,4,5,7,8,11,15,18};
    int target = 15, size = nums.size() - 1;

    if(nums[0] < nums[size])
        cout << binarySearch(nums, target) << endl;
    else
        cout << reversebinarySearch(nums, target) << endl;

    return 0;
}
