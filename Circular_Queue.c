#include<stdio.h>
int f=-1;
int r=-1;
void Enqueue(int a[],int n,int ele){
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
         printf("1.Insertion\n2.Deletion\n3.Display\n4.Exit\n");
         printf("Enter your choice : ");
         scanf("%d",&choice);
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
