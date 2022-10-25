#include<iostream>
#include<vector>
using namespace std;

// Method 1: Peak element on unsorted array.
int getPeakElement(vector<int> &nums){
    int start = 0, mid = 0, size = nums.size() - 1, end = size;

    while(start <= end){
        mid = start + (end - start) / 2;

        if(mid > 0 && mid < size){
            if(nums[mid] > nums[mid + 1] && nums[mid] > nums[mid - 1])
                return mid;
            
            else if(nums[mid + 1] > nums[mid])
                start = mid + 1;
            else
                end = mid - 1;
        }
        else if(mid == 0){
            if(nums[0] > nums[1])
                return 0;
        }
        else if(mid == size){
            if(nums[size] > nums[size - 1])
                return size;
        }
    }

    return -1;
}

// Method 2: Peak element on unsorted array.
int getPeakEle(vector<int> &nums){
    int start = 0, mid = 0, size = nums.size(), end = size - 1;

    while(start <= end){
        mid = start + (end - start) / 2;
        int next = (mid + 1) % size;
        int prev = (mid + size - 1) % size;

        if(nums[mid] > nums[prev] && nums[mid] > nums[next])
            return nums[mid];
        
        if(nums[next] > nums[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }

    return -1;
}

// Driver Code
int main()
{
    // vector<int> nums {1,5,8,19,22,35,30,90,99,88};
    vector<int> nums {55, 11, 22, 33, 44, 56, 66, 77};

    cout << getPeakElement(nums) << endl;

    return 0;
}