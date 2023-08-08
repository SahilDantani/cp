#include<bits/stdc++.h>
using namespace std;

int main(){
    // for output
    cout << "My name" <<" "<<"Sahil"<<endl;
    // for in
    int a;
    char b;
    cin >> a >> b;
    cout << "number is " << a << "Char is :" << b <<endl;

    // overflow
    int c = 100000;
    int d = 100000;
    long int e = c*d;
    cout<<"wrong answer : "<<e<<endl;

    int ab = 100000;
    int bc = 100000;
    long long int ad = ab * 1LL * bc;
    cout<<"Right Answer: "<<ad<<endl;

    // get o/p without scientific notation use : fixed
    // setprecision(0) => remove 0 after (.)
    // 1e24 => 10^24

    // propblem-> find area of rectangle which length->l and b 
    // constrains : 1<l<10^9 and same for b
    // ex: i/p=>3 4 o/p=>12

     int m;
     int n;
     cin>> m >> n;
     cout<<m*1LL*n<<endl;
}