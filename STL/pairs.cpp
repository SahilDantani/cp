/*
make pair: pair<1st.2nd> var;
assign value:methode1:var = make_pair(2,"abc");
             method2:var = {2,"abc"};
get value = var.first and var.second;
*/

//que1:swap value array 

#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int,int>p_array[3];
    p_array[0] = {1,2};
    p_array[1] = {2,3};
    p_array[2] = {3,4};
    swap(p_array[0],p_array[2]);
    for(int i=0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
}