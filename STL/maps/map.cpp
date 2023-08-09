/*
it is a datastructure which stroe key:value
->in normal map key:value stored in sorted order
->Normal map implemented using : Red Black Tree
->Map are not in continued order so we cant use it+1;
->Key and value would be anything ,it would be Container,String,Int.Both would be same datatype or may diff.
syntax:
        map<int,string<m; first one for key and other for value
->key should be unique for each value
*/

#include<bits/stdc++.h>
using namespace std;

void printMap(map<int,string>&m){
    cout<<"size:"<<m.size()<<endl;
    for(auto &pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main(){
    map<int,string>m;
    //define value:
    m[1] = "abc"; //O(log(n))
    m[5] = "cbd";
    m[3] = "kdf";
    // if both string m["abs"] = "ndk" than -> s.size()*O)log(n);
    //with both key value int m[8] give o/p value with 0 

    //inbuild func
    //.find(): it return iterator of given key if not find any match return it of .end()
    auto it =m.find(3);
    if(it == m.end()){
        cout<<"No value";
    }else{
        cout<<"find():"<<(*it).first<<" "<<(*it).second<<endl;
    }

    /*.erase():it take one of these two type 1.key and 2.iterator
    //1.key:
     m.erase(3);
    //2.iterator
    if(it != m.end())
    m.erase(it);
    */

   /*
    //.clear():clear all the things
    // m.clear();
    */
    printMap(m);
    
}