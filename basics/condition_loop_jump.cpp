#include<bits/stdc++.h>
using namespace std;

int main(){
    // condition
    int a = 2;
    int b =3;
    cout<< (a<=b)<<endl;

    // multiple condition check using &&(both should match) and ||
    /*
        if and else if:-
        if(condition){
            code
        }
        else if(condition){
            code
        }
        else{
            code
        }
    */

    //scope:LOCAL(b/n brackets) AND GLOBAL
    // LOOP:
    /*
        //while loop
        int i = 1;
        while(i<=10){
            cout << i << endl;
            i++;
        }

        // for
        for(int i=1;i<=10;i++){
            cout<<i<<endl;
        }
     que// *
        // **
        // ***
        for(int i = 1; i<=3;i++){
            for(int j = 1;j<=3;j++){
                cout<<"*";
            }
            cout<<endl;
        }

    // que: for t test ptint * pattern

   int t;
    cin>>t;
    for(int test=0;test<t;test++){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
    // tip: for test count we use while loop to save one extra var for loop
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
    // jump statement : break and continue
    // break; through out from last for loop in which it used
    for(int i=0;i<=10;i++){
        if(i==8){
            if(true){
                if(true){
                    break;
                }
            }
        }
    }
    // continue:it through out the code to last for loop in which it used
    for(int i=0;i<=10;i++){
        if(i==8){
            if(true){
                if(true){
                    continue;
                }
            }
        }
    }
    // que on break: give output until the input is 42
    while (true){
    int x;
    cin>>x;
    if(x==42){
        break;
    }
    cout<<x<<endl;
   }

    // o/p last n digits of num:modulo by 10^n    
    // remove last n digits of num:int devision by 10^n    

   // que:find sum of all digits of given number for t cases
   int t;
   cin>>t;

   while(t--){
   int n;
   cin>>n;
   int digit_sum = 0;

   while(n>0){
    int last_digit = n%10;
    digit_sum = digit_sum + last_digit;
    n = n/10;
   }
   
   cout<<digit_sum<<endl;
    
   }
   
    */
}