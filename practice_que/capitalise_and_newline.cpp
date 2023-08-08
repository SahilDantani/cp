// que:o/p the string with new line after every space and upperCase

#include<bits/stdc++.h>
using namespace std;

char capitalise(char line){
   return 'A'+(line-'a');
}

int main(){
    while (true)
    {
       string line;
        cin>>line;
        for(int i =0;i<line.length();i++){
            line[i] = capitalise(line[i]);
        }
        cout<<line<<endl;
    }
}
