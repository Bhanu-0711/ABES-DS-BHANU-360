#include<stdio.h>
int main(){
    int i,j,mid,u,l,n,x;
    // scanf("%d",&n);
    // int a[n];
    // for(i=0;i<n;i++){
    //     scanf("%d",&a[i]);
    // }
    int a[6]={1,3,5,7,8,9};
    printf("Enter the element to search: ");
    scanf("%d",&x);
    while(l<=u){
    u=6-1;
    l=0;
    int f=0;
    mid=(u+l)/2;
        if(x==a[mid]){
            f=1;
            printf("element found  ");
            break;
        }
        else if (x>a[mid]){
            l=mid+1;
        }
        else{
            u=mid-1;
        }
    }
    if(f==0){
        printf("element not found");
    }
    else{
        printf("element found");
    }
}
