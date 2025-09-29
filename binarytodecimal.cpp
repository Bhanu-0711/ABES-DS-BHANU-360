#include<bits/stdc++.h>
using namespace std;
void push(int stack[],int sum);
void pop(int stack[]);

int top=-1;

void push(int stack[],int sum){
    if(top>=100)
        cout<<"Overflow";
    else{
    stack[++top]=sum;
    }
}

void pop(int stack[]){
    int a=stack[top];
    cout<<a;
}

int main(){
    int stack[100];
    int num,rem,sum=0;
    int pow=1;
    cout<<"Enter the Binary number";
    cin>>num;
    while(num>0){
        rem=num%10;
        num=num/10;
        sum+=rem*pow;
        pow=pow*2;
        push(stack,sum);
    }
    pop(stack);
}