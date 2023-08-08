#include<bits/stdc++.h>
using namespace std;

/*
return type void: return nothing:
void printHello(){
    cout<<"Hello World";
}
sum with return :
int sum(int a,int b){
    int result = a+b;
    return result;
}

// que:find out final sum of 2 input value's digit sum
int digit_sum(int n){
    int digit_sum =0;
    while(n){
        digit_sum = digit_sum + n%10;
        n = n/10;
    }
    return digit_sum;
}

*/
/*
// pass by value:
void increment(int n){
    n++;
}
// pass by reference:
void increment(int &n){
    n++;
}
*/

/*
// Swap
void swap(int &a, int &b){
    int temp = a;
    a=b;
    b=temp;
}
*/

// inbuild func : swap(),max(),min()
/*
// Arrays are also passes by reference itself
// 1d:
void func(int a[]){
    a[0]=5;
}
// 2d
void func(int a[][20]){
    a[0][0]=5;
}


*/


int main(){
    // function: int main() is function itself also. where int is return type of it
    // printHello();
    // cout<<sum(2,4);

    // // digit sum
    // int a,b;
    // cin>>a>>b;
    // cout<<digit_sum(a)+digit_sum(b);

    // return 0: used in main function to tell compiler that code compile 

    /*
    // References
    // Pass by value :- change by operation in function not affect original one: 
    int a;
    cin>>a;
    increment(a);
    cout<<a<<endl;
    // pass by reference : we use (&) for refence here change in function affect the original one
    int a;
    cin>>a;
    increment(a);
    cout<<a<<endl;

    // que: swap the number
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;

    //1d array:
   int a[10];
   a[0]=6;
   cout<<"before passing :"<<a[0]<<endl;
   func(a);
   cout<<"after passing :"<<a[0]<<endl;

    // 2d array
   int a[10][20];
   a[0][0] = 7;
   cout<<"before"<<a[0][0]<<endl;
   func(a);
   cout<<"after"<<a[0][0]<<endl;


    */
    

}