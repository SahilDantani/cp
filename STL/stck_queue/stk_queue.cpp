/*
stacks: 
->its LIFO datastruncture 
->we can access top element and size only

operation:Insert value -> push
remove value ->pop
=>vie element =>top

queue:
->its FIFO data structure

operation:
->push:insert ele. at end
pop:remove ele at front
front:view front ele
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    // stack:
    stack<int>s;
    // insert value
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    // access value and remove
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

    // queue:
    queue<string>q;
    q.push("abc");
    q.push("bcd");
    q.push("cde");
    q.push("def");
    q.push("ghi");
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
}