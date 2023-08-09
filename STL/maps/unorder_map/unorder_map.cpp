/*
diff:
    ->inbuilt implementation : use hash
    ->time complexity:for insertion O(1),.find :O(1),.erase:O(1)
    ->valid datatypes:use inly key/value which hase inbuild hash func like:int,long,float,string
    ->invalid datatype: vector,pair,set

    syntax:
        unordered_map<sting,int>m;
*/

#include<bits/stdc++.h>
using namespace std;

void printMap(unordered_map<int,string>&m){
    cout<<"size:"<<m.size()<<endl;
    for(auto &pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main(){
    unordered_map<int,string>m;
    //define value:
    m[1] = "abc"; //O(1)
    m[5] = "cbd";
    m[3] = "kdf";
    //with both key value int m[8] give o/p value with 0 

    //inbuild func
    //.find(): it return iterator of given key if not find any match return it of .end()
    auto it =m.find(3);
    if(it == m.end()){
        cout<<"No value";
    }else{
        cout<<"find():"<<(*it).first<<" "<<(*it).second<<endl;
    }
    /*
    .erase():it take one of these two type 1.key and 2.iterator
    //1.key:
     m.erase(3);
    //2.iterator
    if(it != m.end())
    m.erase(it);
    */

   /*
    //.clear():clear all the things
    m.clear();
    */
    printMap(m);
    
}