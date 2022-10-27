#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nearestSmallestToLeft(vector<int> &nums){
    int size = nums.size();
    stack<int> st;
    vector<int> ans;

    for(int i= 0; i < size; i++){
        if(st.size() == 0){
            ans.push_back(-1);
        }
        else if(st.size() > 0 && st.top() < nums[i]){
            ans.push_back(st.top());
        }
        else if(st.size() > 0 && st.top() >= nums[i]){
            while(st.size() > 0 && st.top() >= nums[i])
                st.pop();
            
            if(st.size() == 0)
                ans.push_back(-1);
            else
                ans.push_back(st.top());
        }
        st.push(nums[i]);
    }
    return ans;
}


int main()
{
    vector<int> nums {4,5,2,10,8};

    vector<int> ans = nearestSmallestToLeft(nums);

    for(int i: ans)
        cout << i << " ";
    cout << endl;

    return 0;
}
