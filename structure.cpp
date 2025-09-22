#include<bits/stdc++.h>
using namespace std;
struct node{
    struct node* next;
    int data;
};
node* create(node* start){
    int x;
    cout<<"Enter the data for node:-> ";
    cin>>x;
    node* n=new node();
    n->data=x;
    if(start==NULL){
        start=n;
    }
    else{
    node* ptr = start;
    while(ptr->next!=NULL){
        ptr=ptr->next;
        }
     ptr->next = n;
    }
    return start;
}
void traversal(node* start){
    node* ptr=start;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    int n;
    cout<<"Enter the no. of entries you want:-> ";
    cin>>n;
    node* start=NULL;
    while(n--){
        start=create(start);
    }
    traversal(start);
}