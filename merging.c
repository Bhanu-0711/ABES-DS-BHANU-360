//Merging of two sorted arrays
#include<stdio.h>
int main(){
    int a[3]={1,2,6};
    int b[4]={3,4,5,7};
    int k=0,i=0,j=0;
    int c[7];
    while(i<3 && j<4){
        if(a[i]<=b[j]){
            c[k]=a[i];
            i++;
            k++;
        }
        else{
            c[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<3){
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<4){
        c[k]=b[j];
        j++;
        k++;
    }
    for(i=0;i<7;i++){
        printf("%d ",c[i]);
    }
}