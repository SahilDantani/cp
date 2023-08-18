/*
the pow func used double so instead of that we use this method.
for this we use devide and concoure technique

ex.
for even:
         2^8=2^4*2^4
         2^4=2^2*2^2
         2^2=2^1*2^1
         2^1=2 * 2^0

    odd:
        3^9=3*3^8
        3^8=3^4*3^4
        so on....
    for odd:
        fun(a,b)=a*fun(a,b/2)*fun(a,b/2);
        even:
        fun(a,b)=fun(a,b/2)*fun(a,b/2);
*/
#include<bits/stdc++.h>
using namespace std;

int binExpRecur(int a,int b){
    if(b==0) return 1;
    long long res = binExpRecur(a,b/2);
    if(b&1){
        return a*res*res;
    }else{
        return res*res;
    }
}

int main(){
    int a=2,b=13;
    cout<<binExpRecur(a,b)<<endl;
    
}