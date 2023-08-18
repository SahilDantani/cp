/*
->if a would be <=1e18 or m <=1e18 then we cant use direct binaryIterate method cause it will be overflow
->for a<1e18:-
    -we first take modulo of a before generating expo.
    ex:
    if a=1e18
    we do -> for a^b - > ((a%m)^b)%m

->for m<=1e18;
 - we cant use direct -> (a*1LL*a) or (ans*1LL*a),cuase a*a will be (1e18 * 1e18) before modulation which cause for overflow
 - for this we usee other func for multiplication in which 
 we add a for atime which equal to a*a


 ubderstanding:
 a*a->
    a+a+a+a+....+a times
-we do it ,step by step
  in step 1-> (a+a) which is < 2*1e18
                  %m<1e18
     step 2-> +a <whic <2*1e18
              %m < 1e18

- to do this instead of loop we use method like binaryIter also.
- Just change which we do is,a= a+a instead of a*a and ans= ans+a instead of ans*a

 ex:
  a^b =3^13
  we do 
  (a*b),here a =3 b=13
  13->1 1 0 1

  so, (3*13)=>3*(8+4+0+1);

  b             a               ans(o);
  1101          3                  3
  110           6(a+a)             3
  11            12                 15
  1             24                 39
*/

#include<bits/stdc++.h>
using namespace std;

// const long long M = 1e18;
int binaryMultiply(long long a,long long b){
    int ans =0;
    while(b){
        if(b&1){
            ans = (ans+a);
        }
        a = (a+a);
        b>>=1;
    }
    return ans;
}

int binaryExp(long long a,long long b){
    int ans=1;
    while(b){
        if(b&1){
            ans= binaryMultiply(ans,a);
        }
        a =  binaryMultiply(a,a);
        b>>=1;
    }
    return ans;
}

int main(){
        int a=2,b=13;
        cout<<binaryExp(a,b)<<endl;
}