// que:o/p "yes" if least number is (2,3,5) of multiplication of taken sequence
// here max posible product of array's number is 10^15 so we have to use long long
#include<bits/stdc++.h>
using namespace std;

// 1.without array:

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long product = 1;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            product=product*x;
        }
        if(product%10==2 || product%10==3 || product%10==5){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }
}


// with array:
/*
const int N=16;
int a[N];
int last_digit(int a[],int n){
    long long mult =1;
    for(int i = 0;i<n;i++){
        mult = mult*a[i];
    }
    int last_digit = mult%10;
    return last_digit;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        if(t>100){
            break;
        }
        int n;
        cin>>n;
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        if(last_digit(a,n)==2 || last_digit(a,n)==3 || last_digit(a,n)==5){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }
}
*/
