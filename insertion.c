//insertion
#include<stdio.h>
int main(){
    int a[50];
    int i;
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        printf(" %d",a[i]);
    }
    int x,y,b;
    printf("\n");
    printf("Enter the position to change :- "); scanf("%d",&x);
    printf("Enter the new element :- "); scanf("%d",&b);
    for(i=4;i>=x;i--){
        a[i+1]=a[i];
    }
    a[x]=b;
    for(i=0;i<6;i++){
        printf(" %d",a[i]);
    }
}