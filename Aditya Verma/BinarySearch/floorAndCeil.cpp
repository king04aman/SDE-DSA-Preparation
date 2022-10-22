#include<iostream>
#include<vector>
using namespace std;

int getFloor(vector<int> &nums, int target){
    int start = 0, mid = 0, end = nums.size() - 1;
    int ans = -1;

    while(start <= end){
        mid = start + (end - start) / 2;

        if(nums[mid] == target)
            return mid;
        
        if(nums[mid] < target){
            ans = mid;
            start = mid + 1;
        }
        else if(nums[mid] > target){
            end = mid - 1;
        }
    }

    return ans;
}

int getCeil(vector<int> &nums, int target){
    int start = 0, mid = 0, end = nums.size() - 1;
    int ans = -1;

    while(start <= end){
        mid = start + (end - start) / 2;

        if(nums[mid] == target)
            return mid;
        
        if(nums[mid] < target){
            start = mid + 1;
        }
        else if(nums[mid] > target){
            ans = mid;
            end = mid - 1;
        }
    }

    return ans;
}

// Driver Code
int main()
{
    vector<int> nums {2,4,6,7,9,12,14,16,19,22};
    int target = 20;

    cout << getFloor(nums, target) << endl;
    cout << getCeil(nums, target) << endl;

    return 0;
}