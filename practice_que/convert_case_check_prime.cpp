#include <bits/stdc++.h>
using namespace std;

char upper(char c){
    return 'A'+(c-'a');
}
char lower(char c){
    return 'c'+(c-'A');
}

int main(){
    string s;
    cin>>s;
    int result = 0;
    for(int i = 0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i] = upper(s[i]);
            result = result + s[i];
        }else if(s[i]>='A' && s[i]<='Z'){
            s[i] = lower(s[i]);
            result =result + s[i];
        }
    }
    int flag = 0;
    for(int i = 2;i<result;i++){
        if(result%i==0){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout<<1;
    }else{
        cout<<0;
    }

}