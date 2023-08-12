/*
->It can be applied om sorted one
->lower_bound:-find the element which we want if not present find next grreater one.
    ->if we assign i/p which is greater than gretest one of element present in array then lower_bound return next element pointer

upper_bound:-find greater element

->Both return location.In case array retrun pointer and for vector return interator

syntax:-
for array and vector
lower_bound:lower_bound(a,a+n,5); a is strating index ,a+n next to ending index last one is element for what we want find out lowe or upperone

upper_bound:upper_bound(a,a+n,5);

for map and set:in case of map and set time complexity of lower_bound(a.begin(),a.end(),5) is O(n);
so we use other syntax:

lower_bound: s.lower_bound(
for map in para use key
we can also use pair
)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    // vector
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    auto it = lower_bound(a.begin(),a.end(),5);
    auto itr = upper_bound(a.begin(),a.end(),5);
    if(it == a.end() || itr == a.end()){
        cout<<"Not found";
        return 0;
    }
    cout<<"lower:"<<(*it)<<endl;
    cout<<"upper:"<<(*itr)<<endl;

    // set
    int k;
    cin>>k;
    set<int>s;
    for(int i=0;i<k;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    auto iter = s.lower_bound(5);
    cout<<"lower:"<<(*iter)<<endl;
}