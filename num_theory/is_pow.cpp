#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 16;
    if(n&(n-1)){//cond denote that '&' of both not 0
        cout<<"Not pow of 2";
    }else{
        cout<<"pow of 2";
    }
}