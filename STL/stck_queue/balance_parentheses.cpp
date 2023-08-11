/*
->In given string all the brackets should have closing brackets
:-To check it using stack:
->we push opening brackets in stack and check for the closing brackets that is it has openibg brackets corresponding it.
->at last stack should be empty.
:-brackets with diff. type:- In this case while poping we have to checck matched type string should be poped.

:- here for solution we make unordered_map which contain nracj=kets with positive value and closing bracket with (-) value at last we sum it
if ans -> 0 than brackets are matched
*/

#include<bits/stdc++.h>
using namespace std;

unordered_map<char,int>symbols = {{'[',-1},{'(',-2},{'{',-3},{']',1},{')',2},{'}',3}};

string isBalanced(string s){
    stack<char>st;
    for(char brackets : s){
        if(symbols[brackets]<0){
            st.push(brackets);
        }else{
            if(st.empty())return "NO";
            char top =st.top();
            st.pop();
            if(symbols[top]+symbols[brackets] != 0){
                return "NO";
            }
        }
    }
    if(st.empty()) return "YES";
    return "NO";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<isBalanced(s)<<endl;
    }
}