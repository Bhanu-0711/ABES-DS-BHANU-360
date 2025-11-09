#include<stdio.h>


int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d\n",&n);
    int a[n];
    printf("Enter %d elements: ",n);
    for(int i=0;i<n;i++){
        sacnf("%d",&a[i]);
    }
    merge_sort(a,0,n-1);
}