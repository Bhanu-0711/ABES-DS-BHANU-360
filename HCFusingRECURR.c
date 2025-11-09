#include<stdio.h>
int n;

int hcf(int a,int b){
    if(a%b==0){
        return b;
    }
    else{
        hcf(b,a%b);
    }
}

int main(){
    int a,b;
    printf("Enter the nos. to find HCF:  ");
    scanf("%d %d",&a,&b);
    printf("The HCF of %d and %d is %d",a,b,hcf(a,b));
}