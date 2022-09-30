// Name: Find the Union and Intersection of the two sorted arrays.
// Practice: https://practice.geeksforgeeks.org/problems/union-of-two-arrays/0
// Article: https://www.geeksforgeeks.org/find-union-and-intersection-of-two-unsorted-arrays/


#include<iostream>
#include<vector>
#include<set>
using namespace std;

void getUnion(vector<int> &arr1, vector<int> &arr2){
    set<int> ans;
    for(int i=0; i<arr1.size(); i++)
        ans.insert(arr1[i]);

    for(int i=0; i<arr2.size(); i++)
        ans.insert(arr2[i]);

    for(auto i=ans.begin(); i!=ans.end(); i++)
        cout << *i << " ";
    cout << endl;
}

void getIntersection(vector<int> &arr1, vector<int> &arr2){
    vector<int> ans;
    int i=0, j=0;
    int size1 = arr1.size(), size2 = arr2.size();

    while(i<size1 && j<size2){
        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            arr2[j] = INT_MAX;
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j])
            i++;
        else
            j++;
    }

    for(auto i: ans)
        cout << i << " ";

}

int main(){
    vector<int> arr1 = {3,5,6,7,8,8,7};
    vector<int> arr2 = {1,2,3,4,5,6,7,8,8};

    cout << "Union of given array: " << endl;
    getUnion(arr1, arr2);

    cout << "Intersection of given array: " << endl;
    getIntersection(arr1, arr2);

    return 0;
}
