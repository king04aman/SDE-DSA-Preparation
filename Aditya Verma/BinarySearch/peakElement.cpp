#include<iostream>
#include<vector>
using namespace std;

// 
int getPeakEle(vector<int> &nums){
    int start = 0, mid = 0, size = nums.size(), end = size - 1;

    while(start <= end){
        mid = start + (end - start) / 2;
        int next = (mid + 1) % size;
        int prev = (mid + size - 1) % size;

        if(nums[mid] > nums[prev] && nums[mid] > nums[next])
            return nums[mid];
        
        if(nums[next] > nums[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }

    return -1;
}

// Driver Code
int main()
{
    vector<int> nums {1,5,8,19,22,35,30,90,99,88};

    cout << getPeakEle(nums) << endl;

    return 0;
}