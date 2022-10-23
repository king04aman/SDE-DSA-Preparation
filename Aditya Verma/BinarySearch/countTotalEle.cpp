#include<iostream>
#include<vector>
using namespace std;

// First and last occurance of an element using binary search.
vector<int> getFirstAndLastOcc(vector<int> &nums, int target){
    vector<int> ans(2,-1);
    int start = 0, mid = 0, end = nums.size() - 1;

    // Getting First Occurance
    while(start <= end){
        mid = start + (end - start) / 2;

        if(nums[mid] == target){
            ans[0] = mid;
            end = mid - 1;
        }

        if(nums[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }

    // Getting Last Occurance
    start = 0, mid = 0, end = nums.size() - 1;
    while(start <= end){
        mid = start + (end - start) / 2;

        if(nums[mid] == target){
            ans[1] = mid;
            start = mid + 1;
        }

        if(nums[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return ans;
}

// Driver Code
int main()
{
    vector<int> nums{2,3,9,9,9,9,9,11,14,18};
    int target = 9;

    vector<int> temp =  getFirstAndLastOcc(nums, target);

    cout << temp[1] - temp[0] << endl;

    return 0;
}