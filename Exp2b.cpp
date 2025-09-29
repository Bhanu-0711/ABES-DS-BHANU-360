#include<iostream>
using namespace std;
void push(int x);
int pop(int x);
int stack[100];
int top=-1;
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    int rem,decimal=0,power=1;
    while(num>0){
        rem=num%10;
        num=num/10;
        decimal+= rem*power;
        power*=2;
        push(decimal);
    }
    int a=pop(decimal);
    cout<<"The decimal conversion is "<<a<<endl;
}
void push(int x){
    stack[++top]=x;
}
int pop(int x){
    x=stack[top--];
    return x;
}