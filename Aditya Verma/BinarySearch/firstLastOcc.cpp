#include<iostream>
#include<vector>
using namespace std;

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
    vector<int> nums{2,4,5,7,8,9,9,9,18};
    int target = 9;

    vector<int> temp = getFirstAndLastOcc(nums, target);

    for(int i: temp)
        cout << temp[i] << " ";
    cout << endl;

    return 0;
}