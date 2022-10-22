#include<iostream>
#include<vector>
using namespace std;

int getPivot(vector<int> nums){
    int start = 0, mid = 0, end = nums.size() - 1;

    while(start < end){
        mid = start + (end - start) / 2;

        if(nums[mid] >= nums[0])
            start = mid + 1;
        else
            end = mid;
    }
    return start;
}

int binarySearch(vector<int> &nums, int target, int start, int end){

    while(start <= end){
        int mid = start + (end - start) / 2;

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
    vector<int> nums{11,13,15,1,4,6,7,9};
    int target = 15;
    int size = nums.size() - 1;
    int pivotEle = getPivot(nums);

    if(target > nums[0])
        cout << binarySearch(nums, target, 0, pivotEle) << endl;
    else
        cout << binarySearch(nums, target, pivotEle, size) << endl;

    return 0;
}