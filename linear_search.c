#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int flag=0,x;
    printf("enter the element to search: ");scanf("%d",&x);
    for (int i=0;i<n;i++){
        if (x==a[i]){
            flag=1;
            break;
        }
        else{
            flag=0;
        }
    }
    if (flag==1)
    printf("element found");
    else
    printf("element not found");
}