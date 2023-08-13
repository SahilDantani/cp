/*
->square_root of any number lie b/n 1->n so,search_space for it -> 1 to n all real number
->real num bet 1 to n is infinite, so we have to assign accurate value(precision value)
->in binary search we find middle element then check middle*n==N or notif middle*n>numb so sqrt will be less than middle num otherwise grater
->for decimal num sqrt has many nums after (.) so we have to decide that at what point we want its accuracy
->for this que. we use double and also define epsilone for accuracy
->at condition while(hi-lo>eps) means , for eps->1e-6 upto 5 decimal ans is accurate.
*/

#include<bits/stdc++.h>
using namespace std;

double eps = 1e-7;
double multiply(double &mid,int n){
    double ans =1;
    for(int i=0;i<n;i++){
    ans*=mid;
    }
    return ans;
}

int main(){
    double x;
    int n;
    cin>>x>>n;
    double lo=1,hi=x;
    double mid;
    while(hi-lo>eps){
        mid=(hi+lo)/2;
        if(multiply(mid,n)<x){
            lo=mid;
        }else{
            hi=mid;
        }
    }
    cout<<lo<<endl;
    //we can also use hi insted of lo and alos can set precision: cout<<setprecision(10)<<lo<<"\n"<<hi<<endl;
    //built-in func :pow(x,1.0/2);
}