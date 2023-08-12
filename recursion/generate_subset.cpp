/*
que:Given an integer array nums of unique  element return all possible subsets(the power set).the return solution set must not contain duplicate subsets.Return the solution in any order.
Constrains:
1<=nums.length<=10
-10<=nums[i]<=10
all the numbers of nums are unique

->to make subset either we include the nums or remain as it is.
->we use back_tracking for this
*/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>subsets;

void generate(vector<int>&subset,int i,vector<int>&nums){
    if(i==nums.size()){
        subsets.push_back(subset);
        return;
    }

    // i'th element not in subset
    generate(subset,i+1,nums);

    // i'th element in subset
    subset.push_back(nums[i]);
    generate(subset,i+1,nums);
    subset.pop_back();
}

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int>empty;
    generate(empty,0,nums);

    for(auto subset:subsets){
        for(auto element:subset){
            cout<<element<<" ";
        }
        cout<<endl;
    }
}
