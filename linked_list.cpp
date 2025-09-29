#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

struct node *start=NULL;

struct node *getNode(){
    struct node *p=new node();
    p->next=NULL;
    return p;
}

void Travaersal(struct node *start){
    struct node *p=start;
    while(p->next!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    return start;
}

struct node *Insbeg(struct node *start,int x){
    struct node *p=getNode();
    p->data=x;
    start->next=p;
    start=p;
    return start;
}

struct node *Insafter(struct node *start,int key,int x){
    struct node *p=getNode();
    struct node *temp=start;
    p->data=x;
    while(temp!=NULL && temp->data!=key){
        temp=temp->next;
    }
    if(temp == NULL){
        cout<<"There is no node with key"<<key<<endl;
        return start;
    }
    else{
        p->next=temp->next;
        temp->next=p;
    }
    return start;
}

struct node *Insend(struct node *start,int x){
    struct node *p=getNode();
    struct node *temp=start;
    p->data=x;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    p->next=NULL;
    temp->next=p;
    return start;
}

struct node *Delbeg(struct node *start){
    struct node *temp=start;
    start=temp;
    return temp->data;
}

struct node *Delend(struct node *start){
    struct node *temp=start;
    struct node *PTR=start;
    if(PTR==Null){
        cout<<"There is nothing to delete"<<endl;
    }
    else if(PTR->next==NULL){
        Delbeg(start);
    }
    else{
    while(PTR->next!=NULL){
        temp=PTR;
        PTR=PTR->next;
    }
    temp->next=NULL;
    return  PTR->data;
    }
}

struct node *Delafter(struct node *start,int key){
    struct node *temp=start;
    while(temp!=NULL && temp->data!=key){
        if(temp==NULL){
            cout<<"There os nothing to delete"<<endl;
        }
        else{
            
        }
    }
}

int main(){
    int a,x;
    do{
    cout<<"Enter your choice"<<endl;
    cout<<"1-> Traversal \n2-> Insert at start \n3-> Insertion after a node \n4-> Insertion at the end \n5-> Exit"<<endl;
    cin>>a;
    switch (a){
    case 1:
        Travaersal(start);
        break;
    case 2:
        cout<<"Enter the data to insert"<<endl;
        cin>>x;
        start=Insbeg(start,x);
        cout<<"Data inserted";
        break;
    case 3: 
        cout<<"Enter the data to insert:  "<<endl;
        cin>>x;
        cout<<"Enter the key after which you want to insert:  ";
        int key;
        cin>>key;
        start=Insafter(start,key,x);
        cout<<"Data inserted";
        break;
    case 4:
        cout<<"Enter the data to insert:  "<<endl;
        cin>>x;
        start=Insend(start,x);
        cout<<"Data inserted";
        break;
    case 5:
        int z = Delbeg(start);
        cout<<"The element deleted from start is:  "<<z;
        break;
    case 6:
        int z = Delend(start);
        cout<<"The element deleted from end is:  "<<z;
        break;
    case 7:
        cout<<"Enter the element after you want to delete:  "<<endl;
        cin>>x;
        int z = Delafter(start,x)
        cout<<"The element deleted is:  "<<z<<endl;
    case 8:
        cout<<"Entered a wrong value";
        break;
    }
}while(a!=8);
}