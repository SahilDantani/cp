#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin>>s;
        long long result=0;
        long long two_power = 1;
        for(int i=s.length()-1;i>=0;i--){
            int binary_digit = s[i] - '0';
            result = result + (binary_digit*two_power);
            two_power = two_power * 2;
        }
        cout<<result<<endl;
    }
}