/*
auto assume datatype or type of container itself
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int>v = {1,2,3,4};
for(auto &value : v){ //here we use auto instead of int
    cout<<value<<" "<<endl;
}

vector<pair<int,int>>v_p={{1,2},{2,3},{3,4}};
for(auto &value : v_p){
    cout<<value.first<<" "<<value.second<<endl;
}

}