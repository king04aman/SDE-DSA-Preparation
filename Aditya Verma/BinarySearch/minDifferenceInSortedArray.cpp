#include<iostream>
#include<vector>
using namespace std;

int getMinimumDifference(vector<int> &nums, int target){
    int start = 0, mid = 0, end = nums.size() - 1;

    while(start <= end){
        mid = start + (end - start) / 2;

        if(nums[mid] == target)
            return nums[mid];
        if(nums[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }

    int floor = abs(end - target);
    int ceil = abs(start - target);

    if(floor >= ceil)
        return nums[end];
    else
        return nums[start];
}


// Driver Code
int main()
{
    vector<int> nums {1,9,12,15,19,21,26,31,45};
    int target = 32;

    cout << getMinimumDifference(nums, target) << endl;

    return 0;
}