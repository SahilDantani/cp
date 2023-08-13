/*
->we can apply binary search on any nonotanic order(which maintain a certain order)
ex:1.>1 3 5 7(accending) ->monotonic
    2.>7 5 3 2(deccending) -> monotonic
    3.>f(x) = y^2 => monotonic
    4.>preditace func :- return start with if true it return only true until false come than return only false ,vieversa. 
        ex:FFFTTT
    5.>sine-func : non monotonic 

steps:
    search-space"range of searching
       ex:for 3 4 6 8 9 search=space is 0->4
    mid:find mid of search space
    lo and hi:define low and high of search

    ->if mid elem is less than find elem than look for that elem left side of mid. otherwise right side of mid
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int to_find;
    cin>>to_find;
    int lo=0 , hi=n-1;
    int mid;
    while(hi-lo>1){
        int mid = (hi+lo)/2;
        if(v[mid]<to_find){
            lo = mid+1;
        }else{
            hi=mid;
        }
    }
    if(v[lo]==to_find){
        cout<<lo<<endl;
    }
    else if(v[hi]==to_find){
        cout<<hi<<endl;
    }else{
        cout<<"Not found";
    }
}