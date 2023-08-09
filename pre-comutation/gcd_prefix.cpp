/*
que:You are given an array A of integers of N size. You will be guven Q queries where
each query is represented by two integers L,R. You have to find the gcd(greatest commen division)
of the array after excluding the part from L to R inclusive (1 Based indexing).
You are guaranteed that after excluding the part of the array remaining array
is not empty.

Constrains:
Subtask1:40 points
2<=T,N<=100
1<=Q<=N
1<=A[i]<=10^5
1<=L,R<=N and L<=R

Subtask1:60 points
2<=T,N<=10^5
1<=Q<=N
1<=A[i]<=10^5
1<=L,R<=N and L<=R
sum of N over all the test cases will be less than equal than or equal to 10^6

gcd inbuild function - __gcd(a,b) it has complexity of log
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int a[n+10];
        int forward[n+10];
        int backward[n+10];
        forward[0] = backward[n+1] = 0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=n;i++){
            forward[i] = __gcd(forward[i-1],a[i]);
        }
        for(int i=n;i>=1;i--){
            backward[i] = __gcd(backward[i+1],a[i]);
        }
        while(q--){
            int l,r;
            cin>>l>>r;
            cout<<__gcd(forward[l-1],backward[r+1]);
        }
    }
    }
