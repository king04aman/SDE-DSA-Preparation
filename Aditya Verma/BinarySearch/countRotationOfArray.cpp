#include<iostream>
#include<vector>
using namespace std;

// Method 1
int getRotation(vector<int> &nums){
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

// Method 2
int getRotations(vector<int> &nums){
    int start = 0, mid = 0, size = nums.size(), end = size - 1;

    while(start <= end){
        mid = start + (end - start) / 2;
        int next = (mid + 1) % size;
        int prev = (mid + size - 1) % size;

        if(nums[mid] <= nums[next] && nums[mid] <= nums[prev])
            return mid;

        if(nums[start] <= nums[mid])
            start = mid + 1;
        else if(nums[end] <= nums[mid])
            end = mid - 1;
    }
    return -1;
}

int main()
{
    vector<int> nums = {2,4,5,1,2};

    cout << getRotations(nums) << endl;

    return 0;
}