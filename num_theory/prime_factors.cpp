/*
->smallest divisior on any num always prime
->for every non-prime num it has atleast one prime factor befor root(n)
->if we want to find sol. in rang upto root(n) we consider 2 case.
 case1:-
    if n is composite(non-prime) num you can use onle cond.1 in tha find smallest dividior until it can devide than for next generated n devide it by its smallesst divisor and so on

 case2:-
    IF N IS PRIME NUM YOU HAVE TO ADD ONE MORE COND. THAT FOR REMAINING LAST ONE NUM
      EX:- 24 =>2*2*2*3
         FOR 3 WHICH IS PRIME YOU HAVE TO ADD CON.2
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>prime_factor;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            prime_factor.push_back(i);
            n/=i;
        }
    }
    if(n>1){
        prime_factor.push_back(n);
    }
    for(int prime:prime_factor){
        cout<<prime<<endl;
    }
}