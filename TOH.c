#include<stdio.h>
void TOH(int n,char A,char B,char C){
    if(n==1){
        printf("MOVING DISC 1 FROM %c TO %c\n",A,C);
        return;
    }
    TOH(n-1,A,C,B);
    printf("MOVING DISC %d FROM %c TO %c\n",n,A,C);
    TOH(n-1,B,A,C);
}
int main(){
    int n;
    printf("Enter to no. of disc: ");
    scanf("%d",&n);
    TOH(n,'A','B','C');
}