/*
->in inbuilt sort() algo. there is loginc for swap we can assign that logic as according our requirement
->default logic is in assending order we can assign custom behaviour using comparitor

syntax:sort(a,b,cmp);
->in Comparator if we want to swap, we return that as false else return true
->or just return that what we want in order(if we want assending order return a<b else a>b)
*/

#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>a,pair<int,int>b){
    if(a.first!=b.first){
        return a.first<b.first;
    }
    return a.second>b.second;
}

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<n;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
}