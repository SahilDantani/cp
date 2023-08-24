
#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+10;
int graph1[N][N];

//method 2(list)
vector<pair<int,int>>graph2[N];

int main(){
    //method 1(matrix)
    int n,m,wt; //n->vertex,m=>edge,wt->weight
    cin>>n>>m>>wt;
    for(int i=0;i<m;i++){
        int v1,v2;
        cin>>v1>>v2;
        graph1[v1][v2] = wt;
        graph1[v2][v1] = wt; //just because of bidirection graph

        // method 2

        graph2[v1].push_back({v2,wt});
        graph2[v2].push_back({v1,wt});
    }
}