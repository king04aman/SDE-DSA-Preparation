#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> &nums, int target){
    int start = 0, mid = 0, end = 1;

    while(end < target)
        end *= 2;
    
    while(start <= end){
        mid = start + (end - start) / 2;

        if(nums[mid] == target)
            return mid;
        
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
    vector<int> nums {1,2,3,4,5,6,7,8,9,11,13,15,17,18,19,22,24,26,28,29,32,35}; //... infinite
    int target = 9;

    cout << search(nums, target) << endl;

    return 0;
}