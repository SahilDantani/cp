// whenever you have given que with two rang use 1 base array for your confort

#include<bits/stdc++.h>
using namespace std;

/*
que1: Given array a of N integers.Given Q queries and in each quert given L and R print 
sum of array elements from index L to R(L,R included)

Constrains:
1<=N<=10^5
1<=a[i]<=10^5
1<=Q<=10^5
1<=L,R<=N

understaing:in prefix we make new array in which each ith block of array contain sum of araay element upto ith index;
sum l to r -> pf[r]-pf[l-1]
*/

/*que2:
Given 2d array a of N*N integers.Given Q queries and in each query 
given a,b,c, and d pront sum of square represented by (a,b) as top left
point and (c,d) as bottom right point
Constrains:
1<=N<=10^3
1<=a[i][j]<=10^9
1<=Q<=10^5
1<=a,b,c,d<=N

pf[i][j]=a[i][j] + pf[i-1][j] + pf[j][i-1] - pf[i-1][j-1]

to find sum b/w point (a,b) and (c,d) :
pf[c][d] - pf[a-1][d] - pf[c][b-1] + pf[a-1][b-1]


*/


/*ans1:
const int N = 1e5 + 10;
int a[N];
int pf[N];
*/

/*

*/

const int N = 1e3+10;
int ar[N][N];
long long int pf[N][N];

int main(){
    /*ans1:
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        pf[i] = pf[i-1] + a[i];
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<pf[r] - pf[l-1]<<endl;
    }
    */

   /*
   ans:2

   */
  int n;
  cin>>n;    
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cin>>ar[i][j];
        pf[i][j] = ar[i][j] + pf[i-1][j] + pf[i][j-1] - pf[i-1][j-1];
    }
  }
  int q;
  cin>>q;
  while(q--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<pf[c][d] - pf[a-1][d] - pf[c][b-1] + pf[a-1][b-1];
  }
}