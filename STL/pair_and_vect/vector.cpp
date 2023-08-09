 /*
 vectors are array with dynamic size;
 syntax:vector<int>v;v is var, int is datatype;
 to add value in vector we use push_back and to remove we use pop_back
 to define n size vector:vector<int>v(5);
 fill vector: vector<int>v(5,3);make 5 size array with 3 value;
 copy vector:vector<int>v2=v;
 reference:vector<int>&v2=v;
 size lime:local=1e5;global=1e7
 */

#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    printVector(v);
    // pop value
    v.pop_back();
    printVector(v);
    // fill value
    vector<int>v1(5,3);
    printVector(v1);
    // copy vector;
    vector<int>v2=v;
    printVector(v2);
    // ref vector
    vector<int>&v3=v;
    v3.push_back(9);
    printVector(v3);
}