/*que:
starting with a 1-indexed array of zeros and a list of operations,for each operation add a value to each the array element
between two given indices, inclusive.Onace all operation have been performed, return the maximum value in the array.

Constrains:
3<=n<=10^7
1<=m<=2*10^5
1<=a<=b<=n
0<=k<=10^9

here we make array for rane a to b :staring range index= +value, next to ending index (-value)
*/

#include<bits/stdc++.h>
using namespace std;

const int N=1e7+10;
long long ar[N];

int main(){
 int n,m;
 cin>>n>>m;
 while(m--){
    int a,b,d;
    cin>>a>>b>>d;
    ar[a] += d;
    ar[b+1] -=d;
 }
 for(int i=1;i<=n;++i){
    ar[i] += ar[i-1];
 }
 long long mx=-1;
 for(int i =1;i<=n;i++){
    if(mx<ar[i]){
        mx=ar[i];
    }
 }
 cout<<mx<<endl;
}