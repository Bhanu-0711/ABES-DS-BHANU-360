//counting duplicate
#include<stdio.h>
int main(){
    int n,i,max;
    printf("enter the length of list ");
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    int b[max+1];
    for (i=0;i<max+1;i++){
        b[i]=0;
    }
    for(i=0;i<n;i++){
        b[a[i]]++;
    }
    for(i=1;i<max+1;i++){
        printf("count of %d is %d",i,b[i]);
        printf("\n");}
} 