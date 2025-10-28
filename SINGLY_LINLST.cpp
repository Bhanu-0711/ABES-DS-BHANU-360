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

void Traversal(struct node *start){
    struct node *p=start;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

int count(struct node *start){
    int count=0;
    struct node *temp=start;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

struct node *Insbeg(struct node *start,int x){
    struct node *p=getNode();
    p->data=x;
    p->next=start;
    start=p;
    return start;
}

void search(struct node *start,int x){
    struct node *p=start;
    while(p!=NULL && p->data!=x){
        p=p->next;
    }
    if(p->data==x) cout<<"The element was found"<<endl;
    else cout<<"Element was not present"<<endl;
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

struct node* Delbeg(struct node* start){
    if(start == NULL) return NULL;
    struct node* temp = start;
    start = start->next;
    cout << "Deleted: " << temp->data << endl;
    delete temp;
    return start;
}

struct node *Delend(struct node *start){
    struct node *temp=start;
    struct node *PTR=start;
    if(PTR==NULL    ){
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
        temp=temp->next;
    }
    if(temp==NULL){
        cout<<"There is nothing to delete"<<endl;
    }
    else{
        struct node* toDel = temp->next;
        if(toDel != NULL){
            temp->next = toDel->next;
            delete toDel;
        }
    }
}

int main(){
    int a,x;
    do{
    cout<<"Enter your choice"<<endl;
    cout<<"1-> Traversal and Element counting \n2-> Insert at start \n3-> Insertion after a node \n4-> Insertion at the end \n5-> Delete at begin \n6-> Delete at end \n7-> Delete after a node \n8-> Search the element \n9-> Exit"<<endl;
    cin>>a;
    switch (a){
    case 1:
        Traversal(start);
        int z = count(start)
        cout<<"The no. of elements in the structure is :- "<<z<<endl;
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
        cout<<"Enter the element you want to search: "<<endl;
        cin>>x;
        search(start,x);
    case 9:
        cout<<"Entered a wrong value";
        break;
    }
}while(a!=8);
return 0;
}