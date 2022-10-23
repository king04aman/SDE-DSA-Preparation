#include<iostream>
#include<vector>
using namespace std;

// Searching the first occurance of 1 in binary infinite sorted array.
int getFirstOne(vector<int> &nums){
    int start = 0, mid = 0, end = 1;
    int ans = -1;

    while(nums[end] != 1)
        end *= 2;

    while(start <= end){
        mid = start + (end - start) / 2;

        if(nums[mid] == 1){
            ans = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }

    return ans;
}

// Driver Code
int main()
{
    vector<int> nums {0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1}; //...infinite times
    
    cout << getFirstOne(nums) << endl;

    return 0;
}