#include<stdio.h>
int front=-1;
int rear=-1;
void Enqueue(int a[],int n,int ele){
    if(front==0 && rear>=n-1)
        printf("Overflow\n");
    if(front== -1){
        front=0;
        rear=0;
    }
    else
        rear=rear+1;
    a[rear]=ele;
}

void Dequeue(int a[],int n){
    if(front==-1){
        printf("Underflow");
    }
    else{
        printf("Element deleted is: ");
        printf("%d",a[front]);
        front=front+1;
    }
}

void Display(int a[],int n){
    if(rear==-1){
        printf("Underflow\n");
    }
    else{
        printf("The elements are: ");
        for(int i=front;i<=rear;i++){
            printf("%d",a[i]);
        }
    }
}

int main(){
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    int choice,ele;
    do{
         printf("Enter your choice : ");
         printf("1.Insertion\n2.Deletion\n3.Display\n4.Exit\n");
         scanf("%d",&choice);
         printf("\n");
         switch(choice){
            case 1:
                printf("Enter the element you want to insert: ");
                scanf("%d",&ele);
                Enqueue(a,n,ele);
                break;
            case 2:
                Dequeue(a,n);
                break;
            case 3:
                Display(a,n);
                break;
            case 4:
                printf("Exitting the code...");
                break;
         }
    }while(choice!=4);
}
