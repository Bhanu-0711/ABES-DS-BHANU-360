#include<stdio.h>

int power(int n,int a){
    if(n>0){
       return (a*power(n-1,a));
    }
    else{
        return 1;
    }
}

int main(){
    int a,n;
    printf("Enter the no and enter its power: ");
    scanf("%d %d",&a,&n);
    printf("The answer for %d^%d is %d",a,n,power(n,a));
}