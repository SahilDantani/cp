 /*
 here for array we start to push ele. in stack in the stack befor pushing we have to check that the element which we going to push in stack
 is greater element for any present element in stack.
 ex.[4,5,8,2]
 1->first we push 4 before that we check that 4 us greater elem. for any present elemt in stack then push
 2->we check 5 is greater elem. for the present stack.5 is greater for 4 so pop 4 and push 5 in stack and set 5 in vector.
    >there is 4 for which 5 is greater so we pop 4 and push 5 and set 5 as NGE
3->at end we set -1 for remaining ele in stack
 */

#include<bits/stdc++.h>
using namespace std;

vector<int>NGE(vector<int>v){
    vector<int>nge(v.size());
    stack<int>st;
    for(int i = 0;i<v.size();i++){
        while(!st.empty() && v[i]>v[st.top()]){
            nge[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        nge[st.top()] = -1;
        st.pop();
    }
    return nge;
}

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>nge=NGE(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" "<<(nge[i]==-1?-1:(v[nge[i]]))<<endl;
    }
}