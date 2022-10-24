#include<iostream>
#include<vector>
using namespace std;

// Getting unique element using binary search.
int getUnique(vector<int> &nums){
    int start = 0, mid = 0, end = nums.size() - 1;
    int size = end;

    while(start <= end){
        mid = start + (end - start) / 2;
        int next = (mid + 1) % size;
        int prev = (mid + size - 1) % size;

        if(nums[mid] != nums[next] && nums[mid] != nums[prev])
            return nums[mid];
        
        else if((mid % 2 && nums[mid] == nums[prev]) || (!(mid % 2) && nums[mid] == nums[next])) 
            start = mid + 1;
        else 
            end = mid - 1;
    }

    return -1;
}

// Driver Code
int main()
{
    vector<int> nums {1,1,3,3,5,5,6,6,9,9,11,11,13,13,15};

    cout << getUnique(nums) << endl;

    return 0;
}