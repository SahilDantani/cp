#include<bits/stdc++.h>
using namespace std;

void printBinary(int num){
    for(int i=10;i>=0;i--){
        cout<<((num>>i)&1);
    }
    cout<<endl;
}

int main(){
    int n=59;
    printBinary(n);
    int i =3;
    int msb = (n&((1<<(i+1))-1));
    printBinary(msb);
}