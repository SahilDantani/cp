/*
when you nest a pair or vextor or set in map it arranged itself by comparing value of it
Ex;
map<set<int>,<int>>m;
set<int>s1 = {1,2,3};
set<int>s2 = {2,3};
cout<<(s1<s2);   o/p : 1
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    map<pair<string,string>,vector<int>>m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string fn,ln;
        int ct;
        cin>>fn>>ln>>ct;
        for(int j=0;j<ct;j++){
            int x;
            cin>>x;
            m[{fn,ln}].push_back(x);
        }
    }
    for(auto &pr : m){
        auto &full_name = pr.first;
        auto &list = pr.second;
        cout<<full_name.first<<" "<<full_name.second<<endl;
        cout<<list.size()<<endl;
        for(auto &element : list){
            cout<<element<<" ";
        }
        cout<<endl;
    }
}