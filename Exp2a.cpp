#include<iostream>
using namespace std;
void push(int stack[],int n,int x);
void display(int stack[]);
int pop(int stack[]);
int top=-1;
int x,n;
void push(int stack[],int n, int x){
    if(top==n-1)
    cout<<"Overflow"<<endl;
    else
    stack[++top]=x;
}
int pop(int stack[]){
    if(top==-1)
    cout<<"Underflow"<<endl;
    else{
        x=stack[top];
        top--;
    }
    return x;
}
void display(int stack[]){
    for(int i=top;i>=0;i--){
        cout<<stack[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int choice,n;
    cout<<"Enter the size of stack:";
    cin>>n;
    int stack[n];
    do{
        cout<<"Enter the operation\n1.Push\n2.Pop\n3.Display\n4.To exit\n";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Element to be inserted"<<endl;
                cin>>x;
                push(stack,n,x);
                break;
            case 2:
                cout<<"Popped element= "<<pop(stack)<<endl;
                break;
            case 3:
                display(stack);
                break;
            default:cout<<"You have exited the code"<<endl;
        }
    } 
    while (choice!=4);
}