/*que:
Luffy with his crew is on the way to Dressos,where he will be fighting one of the warlods of the sea Doflamingo. But now
he is getting bored and wants do a fun activity. He is veru much obsessed with palindromes.Given a string S of lower case
English alphabet of length N and two integers L and R he wants to know whether all the letters of the substring from index L
to r(l and r included) can be rearrange to form a palindrom or not. He wants to know this for Q values of L and R and
nedds your help in finding the answer.

Constrains:
1<=t<=10
1<=N,Q<=100000
1<=L<=R<=N
'a'<=S[i]<='z' for 1<=i<=N

->single letter is also known as pallindrom 
->for odd length pallindrom it will contain only one letter which has odd count at middle:(aadbb):d-1 at middle
->for even length pallindrom it will contain all letter with even count:aabbcc

(we find the ciunt of all char and check string shoud not have more than one char with odd count)

*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
int hsh[N][26];

int main(){
    int t;
    cin>>t;
    while(t--){
        for(int i=0;i<N;i++){
            for(int j=0;j<26;j++){
                hsh[i][j]=0;
            }
        }
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            hsh[i+1][s[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            for(int j=1;j<=n;j++){
                hsh[j][i] += hsh[j-1][i];
            }
        }
        while(q--){
            int l,r;
            cin>>l>>r;
            int oddCt=0;
            for(int i=0;i<26;i++){
                int charCt = hsh[r][i]-hsh[l-1][i];
                if(charCt%2 != 0)oddCt++;
            }
            if(oddCt>1)cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
}