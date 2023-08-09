/*
que:for given N strings and Q quaries ,In each query you are given a string print frequency of that string
Constains:
    N<=1e6
    Q<=1e6
    |S|<=100
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string,int>m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m[s]++;
    }
    int q;
    cin>>q;
    while(q--){
        string s;
        cin>>s;
        cout<<m[s]<<endl;
    }
}

// in multimap we can add duplicate value
// suntax:multimap<string,int>m;