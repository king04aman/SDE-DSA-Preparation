#include<iostream>
#include<vector>
using namespace std;

// Peak Element using binary search
int getPeakEle(vector<int> &nums){
    int start = 0, mid = 0, end = nums.size() - 1;

    while(start < end){
        mid = start + (end - start) / 2;

        if(nums[mid] < nums[mid + 1])
            start = mid + 1;
        else
            end = mid;
    }
    return start;
}

// Driver Code
int main()
{
    vector<int> nums {1,3,5,7,9,6,4,2};
    
    cout << getPeakEle(nums) << endl;

    return 0;
}