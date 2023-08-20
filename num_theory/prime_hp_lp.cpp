
#include<bits/stdc++.h>
using namespace std;

const int N= 1e7+10;
vector<bool>isPrime(N,1);
vector<int>lp(N,0),hp(N,0);

int main(){
    isPrime[0] = isPrime[1] = false;
    for(int i=2;i<N;i++){
        if(isPrime[i]==true){
            lp[i]=hp[i]=i;
            for(int j=2*i;j<N;j+=i){
                isPrime[j]=false;
                hp[j]=i;
                if(lp[j]==0){
                    lp[j]=i;
                }
            }
        }
    }
    /*
    prime_factor:

    code:-
      int num;
   cin>>num;
   vector<int>prime_factors;
   while(num>1){
    int prime_factor = lp[num]; //you can also use hp[num]
    while(num%prime_factor==0){
        num/=prime_factor;
        prime_factors.push_back(prime_factor);
    }
   }
   for(int factor:prime_factors){
    cout<<factor<<" ";
   }
    */

   //with count
   int num;
   cin>>num;
   map<int,int>prime_factors;
   while(num>1){
    int prime_factor = lp[num]; //you can also use hp[num]
    while(num%prime_factor==0){
        num/=prime_factor;
        prime_factors[prime_factor]++;

    }
   }
   for(auto factor:prime_factors){
    cout<<factor.first<<" "<<factor.second<<endl;
   }

 /*
que:find divisiors

code:-
 const int N=1e5+10;
 vector<int>divisiors[N];
 int main(){
    for(int i=2;i<N;i++){
        for(int j=i;j<N;j+=i){
            divisiors[j].push_back(i);
        }
    }

    for(int i=1;i<10;i++){
        for(int div:divisiors[i]){
            cout<<div<<" ";
        }
        cout<<endl;
    }
 }
 */
}