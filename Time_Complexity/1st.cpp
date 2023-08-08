// to find time complexity we have to find num of iteration needed for it
/*
// contant time operatin
ex:
int a = 4;
int b= 0;
int c= a + b;

o(3)

// for loop : o(n)

// o(n) + o(1) ~  o(n)
// o(n) + o(n) ~ o(n)
// o(k*n) ~ o(n) where k<<n

// number of iteration in 1 sec ~ 10^7-10^8
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
/*
// ex:log(n):
int n;
cin>>n;
int ct = 0;
while(n>0){
    n = n / 2;
    ct++;
}
// here o(1)+o(1)+o(log(n)) ~ o(log(n))

// que:Given T cases and an array of Size N.print sum of array in each test case.
case:1
// Constrains: 1<=T<=1000
//              1<=N<=1000
//              1<=a[i]<=1000
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int sum = 0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        sum+=x;
    }
    cout<<sum<<endl;
}
// here:o(n^2)
case:2.
// que:Given T cases and an array of Size N.print sum of array in each test case.
// Constrains: 1<=T<=1000
//              1<=N<=1000
//              1<=a[i]<=1000
// Sum of N over all Test cases is < 10^7
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int sum = 0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        sum+=x;
    }
    cout<<sum<<endl;
}
here:code is same but time complexity is->10^7


*/
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int sum = 0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        sum+=x;
    }
    cout<<sum<<endl;
}


}

