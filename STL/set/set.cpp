/*
->in map we use key and value But in set we use only key.
->it stores uniue element in sorted oreder
->every element should be unnique
Syntax : set<int>s;
*/

#include<bits/stdc++.h>
using namespace std;

void printSet(set<string>&s){
    cout<<"size:"<<s.size()<<endl;
    for(auto &value:s){
        cout<<value<<endl;
    }
}

int main(){
    set<string>s;
    // insert value
    s.insert("abc");
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("bc");
    s.insert("bd");

    // find
    auto it = s.find("abc");
    if(it != s.end()){
        cout<<"find:"<<(*it)<<endl;
    }

    // erase:1st:by iterator(erase value only at place of it) 2md:by value(erage all same value) in case of unorder
    // 1st
    if(it!=s.end()){
        s.erase(it);
    }
    //2nd:
    s.erase("bcd");

    printSet(s);
}