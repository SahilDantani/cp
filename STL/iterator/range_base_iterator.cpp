/*
in range base loop the value of container stored in variable which we use in loop
syntax:for(int &value:v):here int is from vector<int>v
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    // range base loop
    vector<int>v = {2,3,4,5};
    //case1 without ref
    for(int value:v){
        value++;
    }
    for(int value :v){
        cout<<value<<" "<<endl; 
    }//this one is without reference

    //case2:with ref
    for(int &value:v){
        value++;
    }//by reference
    for(int value:v){
        cout<<value<<" "<<endl;
    }

    // for pair
    vector<pair<int,int>>v_p = {{1,2},{2,3},{3,4}};
    for(pair<int,int> &value:v_p){
        cout<<value.first<<" "<<value.second<<endl;
    }

}