/*
sort(): take 2 para:1->start index to sort 2->next to last index at where upto we want sorting
suntax:sort(a,b);
it use introsort algorithm wich built using three algorithm
(quit sort,hip sort,insersion sort)
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    //ex:1
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a+2,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    //ex:2vector
    int k;
    cin>>k;
    vector<int>ar(k);
    for(int i=0;i<k;i++){
        cin>>ar[i];
    }
    sort(ar.begin()+2,ar.end()); //nlog(n)
    for(int i=0;i<k;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}