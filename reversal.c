//Reversal of array
#include<stdio.h>
int main(){
    int n,i,max;
    printf("enter the length of list:- ");
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);}
    int b;
    for(i=0;i<n/2;i++){
        b=a[n-1-i];
        a[n-1-i]=a[i];
        a[i]=b;
    }
    for (i=0;i<n;i++){
        printf("%d",a[i]);}
}