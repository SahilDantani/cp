/*
array of vector gives fix row of vector,by it mean after defining how many vector ypu want you cant
able to add or remove vector from that you can add only new value to particular vector

In vector of Vector we can also add or remove vector.You have to keep in mind that what v[i] represent
in your code .If it represent any vector you can apply all func which applied on vect

syntax:vector<vector<int>>v;
*/

#include<bits/stdc++.h>
using namespace std;

void printVect(vector<int>&v){
    cout<<"size:"<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int N;
    cin>>N;
    vector<vector<int>>v; //main vector stores inner vector which is also store value
    for(int i=0;i<N;i++){
        int n;
        cin>>n;
        vector<int>temp;//work as inner vector make it to store value in inner vector
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);//main vector push back temp vector inside it
    }
    v[0].push_back(10); //add 10 in vector 1
    v.push_back(vector<int>()); //add new vector in main vector

    for(int i=0;i<v.size();i++){
        printVect(v[i]);
    }
    cout<<"v[0][1]:"<<v[0][1]; //cout 1st vectors 2nd value
}