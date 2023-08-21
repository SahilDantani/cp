/*
Given an integer array A of size N,Monk needs you to answer T queries for him.In each query , he gives you 2 Inttegers P and Q.In response to eaach of these queries,you need to tell Monk the count of numbers in array A that are divisible by P,Q or both.

Constrains:
1<=N<=2*1e5;
1<=A[i]<=2*1e5;
1<=T<=2*1e5;
1<=P,Q<=2*1e5;

->for array->2 3  5 7 9 20
find counter->[4]->4,20=2;
find counter->[5]-<5,20=2;

total = 2 + 2 - 1(common 20)

->we will find t[i] -> multiples of i in array
for p,q
->t[p]+t[q]-t[lcm(p,q)];
*/

#include<bits/stdc++.h>
using namespace std;

const int N =2e5+10;
int hsh[N];
int multiples_ct[N];

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        hsh[x]++;
    }
    for(int i =1;i<N;i++){
        for(int j=i;j<N;j+=i){
            multiples_ct[i]+=hsh[j];
        }
    }
    int q;
    cin>>q;
    while(q--){
        int p,q;
        cin>>p>>q;
        long long lcm = p*1LL*q/__gcd(p,q);
        long ans = multiples_ct[p]+multiples_ct[q];
        if(lcm<N) ans-=multiples_ct[lcm];
        cout<<ans<<endl; 
    }
    return 0;
}