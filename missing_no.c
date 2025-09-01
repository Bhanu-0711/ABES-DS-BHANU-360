//missing no.
#include<stdio.h>
int main(){
    int a[10]={1,2,3,4,6,7,8,9,10};
    int i,x,y;
    for(i=0;i<10;i++){
        if (a[i]!=i+1){
           y=i;
           break;
        }
    }
     printf("%d was missing",y+1);
}