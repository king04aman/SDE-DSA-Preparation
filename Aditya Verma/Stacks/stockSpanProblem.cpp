#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nearestGreaterToLeft(vector<int> &nums){
    int size = nums.size();
    stack<pair<int, int>> s;
    vector<int> ans;

    for(int i=0; i<size; i++){
        if(s.size() == 0){
            ans.push_back(-1);
        }
        else if(s.size() > 0 && s.top().first() > nums[i]){
            ans.push_back(s.top().second());
        }
        else if(s.size() > 0 && s.top().first() <= nums[i]){
            while(s.size() > 0 && s.top().first() <= nums[i]){
                s.pop();
            }
            if(s.size() == 0)
                ans.push_back(-1);
            else
                ans.push_back(s.top().second());
        }
        s.push(nums[i]);
    }
    return ans;
}


int main()
{
    vector<int> nums {100, 80, 60, 70, 60, 75, 85};

    vector<int> ans = nearestGreaterToLeft(nums);


    return 0;
}