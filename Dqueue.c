#include<stdio.h>
int f=-1;
int r=-1;
void InsFront(int a[],int n,int ele){
    if(f==-1 && r==-1){
        f=r=0;
        a[r]=ele;
    }
    else if((r+1)%n == f){
        printf("Overflow\n");
    }
    else{
        r=(r+1)%n;
        a[r]=ele;
    }
}

void Dequeue(int a[],int n){
    if(f==-1 && r==-1){
        printf("Underflow\n");
    }
    else{
        printf("Element deleted is: ");
        printf("%d",a[f]);
        f=(f+1)%n;
    }printf("\n");
}

void Display(int a[],int n){
    int i;
    if(r==-1){
        printf("Underflow\n");
    }
    else{
        printf("The elements are: ");
        for(i=f;i!=r;i=(i+1)%n){
            printf("%d\t",a[i]);
        }
        printf("%d",a[i]);
        printf("\n");
    }
}

int main(){
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    int choice,ele;
    do{
         printf("1.Insertion from front\n2.Insertion from end\n3.Deletion from front\n4.Deletion from end\n5.Display\n6.Exit\n");
         printf("Enter your choice : ");
         scanf("%d",&choice);
         switch(choice){
            case 1:
                printf("Enter the element you want to insert from front: ");
                scanf("%d",&ele);
                InsFront(a,n,ele);
                break;
            case 2:
                printf("Enter the element you want to insert from end: ");
                scanf("%d",&ele);
                InsEnd(a,n,ele);
                break;
            case 3:
                printf("Enter the element you want to delete from front: ");
                scanf("%d",&ele);
                DelFront(a,n,ele);
                break;
            case 4:
                printf("Enter the element you want to delete from end: ");
                scanf("%d",&ele);
                DelEnd(a,n,ele);
                break;
            case 5:
                Display(int a[],int n);
                break;
            case 6:
                printf("Exiting the code...");
                break;
         }
    }while(choice!=6);
}
