/*
que:Given N string,print unique strings in lexiographical order with theiw frequency
Constrains:
N<=1e5;
|S|<=100;
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,int>m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m[s]++; //m[s] is assing itself value 0 cause we not assign it
    }
    for(auto &pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}