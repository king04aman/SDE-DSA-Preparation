#include<iostream>
#include<vector>
using namespace std;

// Binary Search
int binarSearch(vector<int> &nums, int target){
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
int main(){
    vector<int> nums{2,4,5,7,9,12,15};
    int target = 21;

    cout << binarSearch(nums, target);

    return 0;
}