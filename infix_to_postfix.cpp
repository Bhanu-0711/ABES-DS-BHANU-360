#include<bits/stdc++.h>
using namespace std;

int priority(char ch);
int top=-1;
char push(char x);
char pop(char x);
char st[100];

int main(){
    char ch;
    int top=-1;
    string s;
    cout<<"Enter the string:->  ";
    cin>>s;
    for(int i=0;i<s.length();i++){
        ch=s[i];
        if(isalnum(ch))
            cout<<ch;
        else{
            if(priority(st[top]>=priority(ch))){
                push(st[top]);
            }
            else if(priority(st[top])<priority(ch)){
                pop(st[top]);
            }
            else{
                
            }
        }
    }
}

int priority(char c){
    if(c=='(')
        push(c);
    if (c=='+' || c=='-')
        return 1;
    else if(c=='*' || c=='/')
        return 2;
    else if(c=='^')
        return 3;
    else if(c==')')
        pop(c);
}

char push(char pu){
    top++;
    st[++top]=pu;
}

char pop(char po){
    if(po==')'){
        while(st[top]!='('){
            el=st[top];
            top--;
        }
    }
    
    
}