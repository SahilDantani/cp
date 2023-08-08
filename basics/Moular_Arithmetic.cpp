/*
// Modular Arithmetic
(a+b) = ((a%m) + (b%m))%m
(a*b) = ((a%m) * (b%m))%m
(a-b) = ((a%m) - (b%m) + m)%m
(a/b) = ((a%m) - (b^-1%m) + m)%m
Significance(10^9+7):
1>very close to integer maximum so we can get answer using int 
2>Prime number so we can find all the MMI range of M
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    /*
    que:find factorial for given n
    print answer in M=47
    */
   int n;
   cin>>n;
   int fact =1;
   int M=47;
   for(int i=2;i<=n;i++){
    fact= (fact*i)%M;
    // this use (a*b)%M
   }
   cout<<fact<<endl;
}
/*
process:for fact 4
(1*2*3*4)
first it take (1*2)%M thane store it answer and use for next one
(ans*3)%M
then (ans*4)%M
*/