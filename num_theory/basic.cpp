#include<bits/stdc++.h>
using namespace std;

void printBinary(int num){
    for(int i=31;i>=0;--i){
        cout<<((num>>i)&1);
    }
    cout<<endl;
}

int main(){
    int a=13;
    printBinary(a);
    int i=3;
    if(a&(1<<i)!=0){
        cout<<"bit set"<<endl;
    }else{
        cout<<"not set"<<endl;
    }

    // bit set
    printBinary(a | (1<<1));

    // bit unset
    printBinary(a & (~(1<<3)));

    // toggle
    printBinary(a^(1<<5));

    // count set but
    int ct=0;
    for(int i=31;i>=0;--i){
        if((a&(1<<i))!=0){
            ct++;
        }
    }
    cout<<ct<<endl;
}