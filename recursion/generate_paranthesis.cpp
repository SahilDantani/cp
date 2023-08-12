/*
que:Give n pairs of parenthesis,write func to generate all combination of wll formed parenthesis.
Constrains:1<=n<=8;

Understanding:
->here we use c->closing,o->opening,na:not possible
ex:n=2;

->for each n ypu can add either c or o:
condition to add c and o;
                s-1:-   '('
                       /   \
                      /     \
                    '(('   '()'
                    /       / \
                   / [())na]   \
                 '(()'      '()('
                 /            / \
                /            /   na
             '(())'         '()()'
s-1:>here for first n:1->add '('
->now in second term you can add '(' or ')'.these both are valid.
->the reason of valid n:2->'(' or ')' is the there is remaining i/p(o and c) available.so you can add one more '('
->the reason that you can add ')' is tha the number of opening brackets are more than closing brackets.

s-2:>Now for '((' you can add ')' cause num of opening brack are more than num of closing btackets
->for '()' ,you can only add '(' cause o is remain for this but you cant add ')' cause num of o and c are equal.

[for condition o count should greater than c count for that we have to check howmany o count remain So for condition o remain count should be less than remain c count ]

s-3:>in Code for Back_tracking we use, s.pop_back(); the loop should not re-insert the innserted i.p again and again.
->cause when we insert the '(' brackets in loop it insert o-brackets also, if we not pop it.

understanding s-3:> for n=2
                            n=2
       at start->         ('',2,2) ;           first num for o and 2nd for c  
                        /          \
                       /            na
                      /
            in this step add '()' after
            checking cond. one
                   /
                  /
                ['(',1,2] 
                |         \
                |           \
                |             \
 s-1>----->['((',0,2]           ['()',1,1] <----<s-2  
            |   \                    \      \
            |    \                    \     na
            na     \                   \
                 ['(()',0,1]           ['()(',0,1]
                 /      |                   |     \
                /       |                   na      \
               na       |                             \
                    ['(())',0,0]                    ['()()',0,0]
 //reason to apply back_tracking after s-1> ,after s-1> step if you note remove 2nd added '(' then the string which gone at s-2> will be like ['((',0,2] instead of ['(',1,2] so to pass same string as for 2nd one we undo step after push '(' in ['(('].
*/

#include<bits/stdc++.h>
using namespace std;

vector<string>valid;  //to store valid string
void generate(string &s,int open,int close){
        if(open == 0 && close==0){
            valid.push_back(s);
            return;
        }

        if(open>0){
            s.push_back('(');
            generate(s,open-1,close);
            s.pop_back();
        }
        if(close>0){
            if(open<close){
                s.push_back(')');
                generate(s,open,close-1);
                s.pop_back();
            }
        }
}

int main(){
    int n;
    cin>>n;
    string s;
    generate(s,n,n);
    for(auto element:valid){
        cout<<element<<endl;
    }
}

