/*
in sieve algo we asume that all num in range of N are prime.
then we start from 2,and cross-out all the multiple of 2 from the prime num
then go for next one which wasnt cross-out in multiple of 2
it was 3 after 2 prime num if in range N.we cross-out all multiple of 3 and so on
at the end all remaing num are prim num
*/

#include<bits/stdc++.h>
using namespace std;

const int N=1e7+10;
vector<bool>isPrime(N,1);

int main(){
    isPrime[0]=isPrime[1] = false;
    for(int i=2;i<N;i++){
        if(isPrime[i]==true){
         for(int j=2*i;j<N;j+=i){
             isPrime[j]=false;
         }
       }
    }
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        if(isPrime[num]==true){
            cout<<"Prime\n";
        }else{
            cout<<"Not Prime\n";
        }
    }
}