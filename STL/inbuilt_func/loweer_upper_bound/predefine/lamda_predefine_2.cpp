/*
// lambda function:
        it is a small syntax for write temporary type function
    syntax:
        [](int x,int y){return x+y;}
        ->[]define labda func,() in this pass var which we want to use,{} in this we return what we want 
        ->it return true or false value
    access function:
        int sum=[](int x,int y){return x+y;}
        cout<<sum(2,3);

// all_of:apply lamda func to each element, if any of it not match cond it return false
syntax:any_of(v.begin(),v.end,lambda func)
// any_of:apply lambda func to each element, if any of it match cond it return true
syntax:any_of(v.begin(),v.end(),lambda func)
// none_of:apply lambda func to each element, if all of it not match cond return true
syntax:none_of(v.begin(),v.end(),lamda func)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={2,5,-1};
    cout<<all_of(v.begin(),v.end(),
                [](int x){return x>0;})<<endl;
    cout<<any_of(v.begin(),v.end(),
                [](int x){return x>0;})<<endl;
    cout<<none_of(v.begin(),v.end(),
                [](int x){return x>0;})<<endl;
}