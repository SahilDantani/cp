/*
->in array we access value using i. but in some conatainers like map we cant access value by this method.
it that case we use Iterator
->Iterator is basically structure like pointer.Pointer point address in memory and tp get value from that addr we use(*)
->Iterator Point containers element
Iterator which point first element :- .begin()
Iterator which point next to last element :- .end()

syntax: vector<int>::iterator it;
cout value: cout<<(*it);
in case pair:cout<<(it->first)

diff, bet it++ and it+1;
it++:point next iterator
it+1:point next location

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={2,3,4,5,7};
    vector<int>::iterator it = v.begin();
    for(it = v.begin();it != v.end();it++){
        cout<<(*it)<<endl;
    }
    // for pair
    vector<pair<int,int>>v_p = {{1,2},{2,3},{3,4}};
    vector<pair<int,int>> :: iterator iter;
    for(iter=v_p.begin();iter != v_p.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    //or
    for(iter=v_p.begin();iter != v_p.end();iter++){
        cout<<(iter->first)<<" "<<(iter->second)<<endl;
    }
}