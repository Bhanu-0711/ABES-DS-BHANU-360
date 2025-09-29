#include <bits/stdc++.h>
using namespace std;
int top = -1;
char st[100];
int n = 100;
void push(char ch){
    if (top == n - 1) {
        cout << "Stack Overflow" << endl;
    } 
    else {
        st[++top] = ch;
    }
}
char pop(){
    if (top == -1){
        cout << "Stack Underflow" << endl;
        return -1;
    } else {
        return st[top--];
    }
}
int priority(char ch) {
    if (ch == '(') return 0;
    else if (ch == '+' || ch == '-') return 1;
    else if (ch == '*' || ch == '/') return 2;
    else if (ch == '^') return 3;
    return 0;
}
int main() {
    string exp;
    cout << "Enter the expression: ";
    cin >> exp;
    for (int i = 0; i < exp.length(); i++) {
        char ch = exp[i];
        if (isalnum(ch)) { 
            cout << ch;
        }
        else if (ch == '(') {
            push(ch);
        }
        else if (ch == ')') {
            while (st[top] != '(') {
                cout << pop();
            }
            pop(); 
        }
        else if(ch=='^'){
            push(ch);
        }
        else{
            while (top != -1 && priority(st[top]) >= priority(ch)) {
                cout << pop();
            }
            push(ch);
        }
    }
    while (top != -1) {
        cout << pop();
    }
    return 0;
}