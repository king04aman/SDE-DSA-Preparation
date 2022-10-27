#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nearestGreaterToLeft(vector<int> &nums){
    int size = nums.size();
    stack<int> s;
    vector<int> ans;

    for(int i=0; i<size; i++){
        if(s.size() == 0){
            ans.push_back(-1);
        }
        else if(s.size() > 0 && s.top() > nums[i]){
            ans.push_back(s.top());
        }
        else if(s.size() > 0 && s.top() <= nums[i]){
            while(s.size() > 0 && s.top() <= nums[i]){
                s.pop();
            }
            if(s.size() == 0)
                ans.push_back(-1);
            else
                ans.push_back(s.top());
        }
        s.push(nums[i]);
    }
    return ans;
}

int main()
{
    vector<int> nums {1,3,0,0,1,2,4};

    vector<int> ans = nearestGreaterToLeft(nums);

    for(int i: ans)
        cout << i << " ";
    cout << endl;

    return 0;
}