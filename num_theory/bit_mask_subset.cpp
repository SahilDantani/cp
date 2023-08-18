/*
for set of -> 2,4,5
bit mask:
0 -> 0 0 0 -> []
1 -> 0 0 1 -> [2]
2 -> 0 1 0 -> [4]
3 -> 0 1 1 -> [2,4]
4 -> 1 0 0 -> [5]
5 -> 1 0 1 -> [2,5]
6 -> 1 1 0 -> [4,5]
7 -> 1 1 1 -> [2,4,5]
*/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>subsets(vector<int>&nums){
    int n = nums.size();
    int subset_ct = (1<<n);
    vector<vector<int>>subsets;
    for(int mask=0;mask<subset_ct;mask++){
        vector<int>subset;
        for(int i=0;i<n;i++){
            if((mask&(1<<i))!=0){
                subset.push_back(nums[i]);
            }
        }
        subsets.push_back(subset);
    }
    return subsets;
}

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    auto all_subsets = subsets(v);
    for(auto subset:all_subsets){
        for(int ele:subset){
        cout<<ele<<" ";
        }
        cout<<endl;
    }
} 