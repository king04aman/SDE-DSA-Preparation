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


int main()
{
    vector<int> nums = {3,4,5,1,2};

    cout << getRotation(nums) << endl;

    return 0;
}