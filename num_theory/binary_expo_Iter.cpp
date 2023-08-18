/*
   -> in this method we use binary num of expo.. and then iterate through it.
   -> if LSB is 1 then multiply it by the num

   ex:
     3^13 -> 3^(1101)
          -> 3^(8+4+0+1)
          -> 3^8*3^4*3^0*3^1

   for this case:a=3,b=13

   b                     a               ans(1)
   1101                  3               3=(ans*a)
    |                    |               
right shift   next step we do a*a        
   110                   3^2             3
   11                    3^4             3^5
   1                     3^8             3^13          
*/      

#include<bits/stdc++.h>
using namespace std;

int binaryExpoIter(int a,int b){
    int ans =1;
    while(b){
        if(b&1){
            ans=(ans*1LL*a);
        }
        a=(a*1LL*a);
        b>>=1;
    }
    return ans;
}

int main(){
    int a=2,b=13;
    cout<<binaryExpoIter(a,b)<<endl;
}