/*
Alex has started hacking websites,and also started learning encryption,decryption of messages.Once he faced interesting issue,where he needs to decrypt the message in a different way.Initially, he will be given an array of A of N integers, and has to decrypt Q messages.In each meassage he will get and integer X,and if X can be converted into product of two different or same prime numbers, then the real message is "YES",otherwise the message is "NO".

To convert X,he can choose one element from array say Y(X should be divisible by Y),and can divide X by Y any number of times (till X is divisible by Y).Help Alex in decryption the messages.

Constrains:-
         1<=N<1e5
         0<=Ai<1e6
         1<=Q<1e6
         0<=X<1e6

ex:
 for x=60 and array [2 22 7 10]
 possible pf = 2,3,5
 possible pair = 2*2,2*3,2*5,3*5

 1>60/2*2=15 which can not be get by any num of array or expo of array num
 2>60/2*3=10 which can not be get by any num of array or expo of array num
 3>60/2*5=6 which can not be get by any num of array or expo of array num
 4>60/3*5=4 which can be get by num 2 of array or expo of array num which is 4=2*2
*/

#include<bits/stdc++.h>
using namespace std;

const int N = 2e6+10;
int a[N];
int hp[N];
int canRemove[N];//canRemove[i]=>if i can be remove ->1 else 0
int hsh[N];

vector<int>distinctPF(int x){
    vector<int>ans;
    while(x>1){
        int pf = hp[x];
        while(x%pf==0)x/=pf;
        ans.push_back(pf);
    }
    return ans;
}

int main(){
    for(int i=2;i<N;i++){
        if(hp[i]==0){
            for(int j=i;j<N;j+=i){
                hp[j]=i;
            }
        }
    int n,q;
    cin>>n>>q;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        hsh[x]=1;
    }
    for(int i=2;i<N;i++){
        if(hsh[i]){
            for(long long j=i;j<N;j*=i){
                canRemove[j]=1;
            }
        }
    }
    while(q--){
        int x;
        cin>>x;
        vector<int>pf=distinctPF(x);
        bool isPossible = false;
        for(int i=0;i<pf.size();i++){
            for(int j=i;j<pf.size();j++){
                int product = pf[i]*pf[j];
                if(i==j && x%product !=0)continue;
                int toRemove = x/product;
                if(canRemove[toRemove]==1 || toRemove ==1){
                    isPossible=true;
                    break;
                }
            }
            if(isPossible)break;
        }
        cout<<(isPossible?"YES\n":"NO\n");
    }
    }
}