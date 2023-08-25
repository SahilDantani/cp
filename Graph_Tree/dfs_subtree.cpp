/*
que:-find dum of given vertext subtree,and also count even num that are present in that subtree
i/p:13
    [1 2],[1 3],[1 13],[2 5],[3 4],[5 6],[5 7],[5 8],[8 12],[4 9],[4 10],[10 11]
*/
#include<bits/stdc++.h>
using namespace std;

const int N =1e5+10;
vector<int>g[N];

int subtree_sum[N];
int even_c[N];

void dfs(int vertex,int par=0){
    if(vertex%2 == 0)even_c[vertex]++;
    subtree_sum[vertex]+=vertex;
    for(int child:g[vertex]){
        if(child == par)continue;
        dfs(child,vertex);
        subtree_sum[vertex] += subtree_sum[child];
        even_c[vertex]+=even_c[child];
    }
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1);
    /*if q query given and have to find sum for suntree value v
    // int q;
    // cin>>q;
    // while(q--){
    //     int v;
    //     cin>>v;
    //     cout<<subtree_sum[v]<<" "<<even_c[v]<<endl;
    // }
    */
    for(int i=0;i<=n;i++){
        cout<<subtree_sum[i]<<" "<<even_c[i]<<endl;
    }
}