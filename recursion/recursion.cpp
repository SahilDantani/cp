#include<bits/stdc++.h>
using namespace std;

void func(int n){
    if(n==0)return;
    cout<<"before: "<<n<<endl;
    func(n-1);
    cout<<"after: "<<n<<endl;
}

int fact(int n){
    if(n==0) return 1;
    return fact(n-1)*n;
}

int main(){
    func(5);
    // fact
    int n;
    cin>>n;
    cout<<fact(n);
}