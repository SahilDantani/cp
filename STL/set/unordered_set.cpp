/*
changes b/n unordered_set and set same as map and unordered_map
time complexity->insert:O(1)
invalid containers

syntax:unordered_set<string>s;
*/

/*
que:Given N string and Q queries In each query you are given a string print yes 
if string present else print no
Constrins:
N<=1e6
|s|<=100
Q<=1e6
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<string>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        s.insert(str);
    }
    int q;
    cin>>q;
    while(q--){
        string str;
        cin>>str;
        if(s.find(str) == s.end()){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}