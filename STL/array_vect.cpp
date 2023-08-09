/*array of vector make n vectors by it mean,
vector<int>v[n]; it make n vectors which are like v[0],v[1]...
*/

#include<bits/stdc++.h>
using namespace std;

void printVect(vector<int>&v){
    cout<<"size:"<<v.size()<<endl;
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    } 
    cout<<endl;
}

int main(){
    int N;//for taking how many vect we want to make
    cin>>N;
    vector<int>v[N];
    for(int i=0;i<N;i++){
        int n;//this is for howmany input we want to take
        cin>>n;
        for(int j=0;j<n;j++){
            int x;//this is for i/p
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i=0;i<N;i++){
        printVect(v[i]);
    }
}