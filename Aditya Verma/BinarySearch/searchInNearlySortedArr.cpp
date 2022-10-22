#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> &nums, int target){
    int start = 0, mid = 0, size = nums.size(), end = size - 1;

    while(start <= end){
        mid = start + (end - start) / 2;
        int next = (mid + 1) % size;
        int prev = (mid + size - 1) % size;

        if(nums[mid] == target)
            return mid;
        else if(nums[next] == target)
            return next;
        else if(nums[prev] == target)
            return prev;

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
    vector<int> nums {10, 20, 40, 30, 50, 60, 90, 80};
    int target = 90;

    cout << search(nums, target) << endl;

    return 0;
}