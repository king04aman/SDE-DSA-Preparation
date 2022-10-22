#include<iostream>
#include<vector>
using namespace std;

int getNextLetter(vector<char> &alpha, char target){
    int start = 0, mid = 0, end = alpha.size() - 1;
    int ans = -1;

    while(start <= end){
        mid = start + (end - start) / 2;

        if(alpha[mid] <= target){
            start = mid + 1;
        }
        else if(alpha[mid] > target){
            ans = mid;
            end = mid - 1;
        }
    }
    return ans;
}

// Driver Code
int main()
{
    vector<char> alpha {'a', 'c', 'f', 'h'};
    char target = 'c';

    cout << getNextLetter(alpha, target) << endl;

    return 0;
}