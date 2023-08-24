/*
    take i/p using matrix and list
    for graph:-
                    (1)          (2)
                     |  \       /  |
                     |    \   /    |
                     |     (3)     |
                     |    / | \    |
                     |  /   (4) \  |
                     |/       \  | |
                    (5)         \(6)
*/

#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
vector<int>g[N];
bool vis[N];

void dfs(int vertex){
    //stage-1:take action on vertex after entering the vertex
    cout<<vertex<<endl;
    vis[vertex]=true;
    for(int child : g[vertex]){
        // stage-2:tack action on child before entering the child node
        cout<<"parent"<<vertex<<", child"<<child<<endl;
        if(vis[child])continue;
        dfs(child);
        // stage-3:tack action on child after existing the child node
    }
    // stage-4:take action on vertex before exiting the vertex
}

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    dfs(1);
}