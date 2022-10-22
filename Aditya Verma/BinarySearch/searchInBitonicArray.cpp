#include<iostream>
#include<vector>
using namespace std;

int getPeak(vector<int> &nums){
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

int ascendingSearch(vector<int> &nums, int target, int start, int end){

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

int descendingSearch(vector<int> &nums, int target, int start, int end){

    while(start <= end){
        int mid = start + (end - start) / 2;

        if(nums[mid] == target)
            return mid;

        if(nums[mid] < target)
            end = mid - 1;
        else
            start = mid + 1;
    }

    return -1;
}

// Driver Code
int main()
{
    vector<int> nums {1,3,5,7,9,8,6,4,2};
    int target = 6, size = nums.size() - 1;
    int peakIndex = getPeak(nums);

    int ans1 = ascendingSearch(nums, target, 0, peakIndex - 1);
    int ans2 = descendingSearch(nums, target, peakIndex, size);

    if(ans1 == -1)
        cout << ans2 << endl;
    else
        cout << ans1 << endl;

    return 0;
}