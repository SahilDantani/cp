/*
for (a*b)=1,b is MI of a

(a*b)%m=>((a%m)*(b%m))%m
m-1>
so we can consider value of we just upto => 1<=b<m-1
we loop through the range b
whenever a*b mathch with ans 1, B will act MI of A

m-2>
We use fermate theorem

(a^m-1) ≋ 1 * mod(m)
mult. both side by a^-1

so,
(a^m-1) ≋ (a^-1)mod(m)

so,
====>[(a^m-2)%m = a^-1]<====
binExp(a,m-2,m)

here,
M=>prime num
A=>not multiple of M
*/

/*
que:-There are N children and K toffees.K<N count the number of ways to distribute toffee ammong N students such that each students get 1 toffee only.[nCr%m]

Constrains:-
N<1e6
k<n<1e6
m<1e9+7
q<1e5
*/

#include<bits/stdc++.h>
using namespace std;

const int N=1e6+10;
int fact[N];
const int M=1e9+7;

int binExp(int a,int b,int m){
    int ans=1;
    while(b){
        if(b&1){
            ans=(ans*1LL*a)%m;
        }
        a=(a*1LL*a)%m;
        b>>=1;
    }
    return ans;
}

int main(){
    fact[0]=1;
    for(int i=1;i<N;i++){
        fact[i]=(fact[i-1]*1LL*i)%M;
    }
    int q;
    cin>>q;
    while(q--){
        int n,k;
        cin>>n>>k;
        int result = fact[n];
        int den = (fact[n-k]*1LL*fact[k])%M;
        result = result * binExp(den,M-2,M);
        cout<<result<<endl;
    }
}
