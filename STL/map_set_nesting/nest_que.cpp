/*
que:->monk is a multitanlented person adn prepare results for his college in his free time.(yes,he is still in love with his old college!) He gets a list of students with their marks. The max marks which can be obtained int hte exam is 100
The monk is supposed toarrange  the list in such a manner that list is sorted in decreasing order of marks and if two students have the same marks.they should be arranged in lexixographical manner.Help monk prepare the same
Constrains:
1<=N<=1e5
1<=|length of th name|<=100
1<=marks<=100
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,multiset<string>>marks_map;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int marks;
        string name;
        cin>>name>>marks;
      //  marks_map[marks].insert(name); //this is for method 1
        marks_map[-1*marks].insert(name); //for method 2
    }
    //for o/p we can use 2 method
    /*
    //method:1
    auto cur_it = --marks_map.end();
    while(true){
        auto &students = (*cur_it).second;
        auto marks =(*cur_it).first;
        // here we use for loop to print out student from set
        for(auto &student : students){
            cout<<student<<" "<<marks<<endl;
        }
        if(cur_it == marks_map.begin())break;
        cur_it--;
    }
    */

   //method:2
    for(auto &marks_map_pr : marks_map){
        auto &students = marks_map_pr.second;
        auto &marks = marks_map_pr.first;
        for(auto &student : students){
            cout<<student<<" "<<(-1*marks)<<endl;
        }
    }
}