#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void reverse(vector<int> &nums){
    int start = 0, end = nums.size() - 1;

    while(start < end){
        swap(nums[start++], nums[end--]);
    }
}

vector<int> nearestSmallerToRight(vector<int> &nums){
    int size = nums.size() -1;
    stack<int> s;
    vector<int> ans;

    for(int i=size; i >= 0; i--){
        if(s.size() == 0){
            ans.push_back(-1);
        }
        else if(s.size() > 0 && s.top() < nums[i]){
            ans.push_back(s.top());
        }
        else if(s.size() > 0 && s.top() >= nums[i]){
            while(s.size() > 0 && s.top() >= nums[i])
                s.pop();
            
            if(s.size() == 0)
                ans.push_back(-1);
            else
                ans.push_back(s.top());
        }
        s.push(nums[i]);
    }
    reverse(ans);

    return ans;
}


int main()
{
    vector<int> nums {4,5,2,10,8};

    vector<int> ans = nearestSmallerToRight(nums);

    for(int i: ans)
        cout << i << " ";
    cout << endl;

    return 0;
}