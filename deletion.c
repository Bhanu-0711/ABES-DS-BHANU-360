//deletion
#include<stdio.h>
int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int i,x,y;
    printf("enter the position to delete:- ");scanf("%d",&x);
    y=a[x];
    for(i=x-1;i<10;i++){
        a[i]=a[i+1];
    }
    for(i=0;i<9;i++){
        printf(" %d",a[i]);
    }       
}