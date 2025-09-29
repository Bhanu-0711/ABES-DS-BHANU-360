#include<bits/stdc++.h>
using namespace std;
void display(int stack[]);
void push(int stack[],int n,int x);
int pop();
int top=-1,x;
void push(int stack[],int n, int x){
    if (top==n-1)
        cout<<"Overflow"<<endl;
    else
        stack[++top]=x;
}
 
int pop(int stack[],int n){
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

}

int main(){
    int choice,n;
    cout<<"Enter the size of stack -->  ";
    cin>>n;
    int stack[n];
    do{
        cout<<"Enter the operation 1.Push 2.Pop 3.Display -->  ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter element to be inserted -->  ";
                cin>>x;
                push(stack,n,x);
                break;
            case 2:
                cout<<endl<<"Popped element:-  "<<pop(stack,n)<<endl;
                break;
            case 3:
                display(stack);
                break;
            default: cout<<endl<<"You have entered the wrong choice!! "<<endl;
            
        }
        cout<<"Enter 4 to exit the code ";
    }while(choice!=4);
}