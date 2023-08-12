/*
->multiset allow to keep multiple value
->time comp->insert:O(log(n))
->in case of find it generate first one's iterator value in any cope of there
-.in case erase if u use (it) it errase first on and if u use value for it ,it will erase all same value
syntax:multiset<string>s;
*/


/*que:Monk and Candy*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        multiset<long long>bags;
        for(int i=0;i<n;i++){
            long long candy_ct;
            cin>>candy_ct;
            bags.insert(candy_ct);
        }
        long long total_candy=0;
        for(int i=0;i<k;i++){
            auto last_it = (--bags.end());
            long long candy_ct = *last_it;
            total_candy += candy_ct;
            bags.erase(last_it);
            bags.insert(candy_ct/2);
        }
        cout<<total_candy<<endl;
    }
}