#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int cth_number;
    for(int i=2;c>0;i++){
        if(i%a==0 || i%b==0){
            c--;
            cth_number =i;
        }
    }
    int lcm;
    for(int i = 1; i<=a*b;i++){
        if(i%a==0 && i%b==0){
            lcm =i;
            break;
        }
    }
    int step;
    if(cth_number%a==0 && cth_number%b==0){
        step = lcm;
    }else if(cth_number%a==0){
        step = a;
    }else{
        step = b;
    }

    for(int i = cth_number;i>=0; i = i - step){
        cout<<i<<" ";
    }
}