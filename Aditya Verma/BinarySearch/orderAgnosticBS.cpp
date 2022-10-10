// Binary Search on Descending sorted Array.
#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> &nums, int target){
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


int main()
{
    vector<int> nums{20,17,15,13,12,11,9,5,2};
    int target = 17;

    cout << binarySearch(nums, target) << endl;    

    return 0;
}
