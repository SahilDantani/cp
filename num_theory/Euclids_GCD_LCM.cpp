/*
    Euclid algo -> a*b/gcd(a,b) = lcm

   -> long devison method:- in this we devide devider until remainder be 0.devider devide by devisor which change as a devider if remainder not  equal to 0 and remainder become a devisor
     18%12=6
     12%6=0
     gcd=6
       
*/

#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(b==0)return a;
    return(gcd(b,a%b));
}

int main(){
    cout<<gcd(18,12)<<endl; //gcd
    cout<<(12*18)/gcd(12,18)<<endl;  //lcm
}