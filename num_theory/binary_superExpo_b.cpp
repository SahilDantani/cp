/*
for ex: if we want find -> 52^62^32

->for this we use Eular's theorem:
 concept 1-> co-prime num :- gcd of 2 num is 1 than the are co-prime num

 concept 2->ETF:- Count of co-prime num for num N,to range 1 to N is ETF
     ⌀[n] = n * ∏(1-1/p),where p is distict prime
    
 concept 3->Eular Therom:-
    1>for all num:-
        (a^b)%M = (a^(b%⌀[M]))%M
    2>for only prime M:-
        (a^b)%M = (a^(b%(M-1)))%M
        
*/

#include<bits/stdc++.h>
using namespace std;
const int M =1e9+7;

int binaryExpo(int a,long long b,int m){
    int ans = 1;
    while(b){
        if(b&1){
            ans = (ans*1LL*a)%m;
        }
        a= (a*1LL*a)%m;
        b>>=1;
    }
    return ans;
}

int main(){
    // (52^62^32)%M
    cout<<binaryExpo(50,binaryExpo(62,32,M-1),M);
    // use(%⌀m) instead of m-1 for general case
}