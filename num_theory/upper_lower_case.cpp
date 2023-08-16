#include<bits/stdc++.h>
using namespace std;

void printBinary(int c){
    for(int i=10;i>=0;i--){
        cout<<((c>>i)&1);
    }
    cout<<endl;
}

int main(){
    for(char c='A';c<='E';c++){
        cout<<c<<endl;
        printBinary(int(c));
    }
    for(char c='a';c<='e';c++){
        cout<<c<<endl;
        printBinary(int(c));
    }
    int A='A';
    char a = A | (1<<5);
    cout<<a<<endl; //generate lower
    cout<<char(a&(~(1<<5)))<<endl;

    // or we can use
    int D='D';
    int e='e';
    cout<<char(D | (' '))<<endl;
    cout<<char(e & ('_'))<<endl;
}