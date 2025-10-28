#include<stdio.h>
int n;
int DAT[200];
int fibo(int n){
    if(n==1 || n==2)
        return DAT[n]=n-1;
    else{
        if(DAT[n]==0)
        return DAT[n]=(fibo(n-1)+fibo(n-2));
    }
}
int main(){
    int i;
    printf("Enter the no. of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf(" %d ",fibo(i));
    }
}