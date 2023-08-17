/*
que:Given array of n integers.All integers are present in even count expect one. find that one integer which has odd count in O(N) time complexity and O(1) space;
Constrains:N<10^5
    a[i]<10^5
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x;
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>x;
        ans^=x;
    }
    cout<<ans<<endl;
}