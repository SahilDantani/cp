/*
->xor of 2 sam num is =0;
->xor with 0 of any num = num itself;
    -x^x=0
    -x^0=x
->x^y^z==x^z^y==y^x^z
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=6,b=4;
    a=a^b;
    b=b^a;//b^(a^b)=b^b^a=a
    a=a^b;//a^(b^a)=b
    cout<<a<<" "<<b<<endl;
}