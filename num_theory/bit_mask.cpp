/*
Limitation:-Limitation for bit masking is that you can store data upto limited num beccause of limited bits.

UNDERSTANDING BY EX:-
->Leet consider 3 persion 1,2,3 they have fruits from givn for.each denotedd by index.
            Apple-0
            Orange-1
            Banana-2
            Lichi-3
->
  person     fruits      Bit masking
    1   ->   2,3          1100
    2   ->   0,1,3        1011
    3   ->   1,3          1010

->In above data we use bit masking instead of making array of available fruit to the person
->we use bit_num like at avaliable fruit position bit to be set
->Now if we want to find common fruit bet 2 person we use AND oper
*/

/*
que:There are n<=5000 workers.Each worker is available during some of days of this month(month days 30).for each worker you are given a set of numbers ,each from interval [1,30],representing his/her availibility.you need to asign an important project to two workers but they will able to work on the project only when they are both available.find two workers that are best for the job. maximize the num of days.when both these workser are available.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>masks(n,0);
    for(int i=0;i<n;i++){
        int num_workers;
        cin>>num_workers;
        int mask=0;
        for(int j=0;j<num_workers;j++){
            int day;
            cin>>day;
            mask=(mask | (1<<day));
        }
        masks[i]=mask;
    }
    int max_days=0,person1=-1,person2=-1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int intersection = masks[i]&masks[j];
            int common_days= __builtin_popcount(intersection);
            if(common_days>max_days){
                max_days=common_days;
                person1=i;
                person2=j;
            }
        }
    }
    cout<<person1<<" "<<person2<<" "<<max_days<<endl;
}