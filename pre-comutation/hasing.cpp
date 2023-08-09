/*que:1
test case a number N.Print its factorial
for each test case %M
where M = 10^9+7

Constrains:
1<= T <=10^5
1<= N <=10^5
*/



/*
que:2-
Given array a of N integers.Given Q queries and in each query given a number X.
print count of that number in array.

Constrains:
1<= N <=10^5
1<= a[i] <=10^7
1<= Q <=10^5
*/

#include<bits/stdc++.h>
using namespace std;

/*
a:1-
const int M = 1e7+7; 
const int N = 1e5+10;
long long fact[N];
*/

/*
const int N = 1e7+10;
int hsh[N];
*/

int main(){
    /* ans 1:
    int t;
    cin>>t;
    fact[0] =fact[1] =1;
for(int i=2;i<N;i++){
    fact[i] = fact[i-1] * i;
}
    while(t--){
        int n;
        cin>>n;
        cout<<fact[n];
    }
    */

   /*ans:2-
   
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
        hsh[a[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        cout<<hsh[x]<<endl;
    }
   */

}