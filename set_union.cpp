// Set union
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n=4,m=5;
    int a[4],b[5],i;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    int c[9],j=0,k=0;
    i=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            if(k==0 || c[k-1]!=a[i]){
               c[k++]=a[i];}
               i++;}
        else if(a[i]>b[j]){
            if(k==0 || c[k-1]!=b[j]){
                c[k++]=b[j];}
                j++;}
        else{
            if(k==0 || c[k-1]!=b[j]){
                c[k++]=b[j];}
                i++;
                j++;}}
        while(i<n){
            if(k==0 || c[k-1]!=a[i]){
                c[k++]=a[i];}
                i++;}
        while(j<m){
            if(k==0 || c[k-1]!=b[j]){
                c[k++]=b[j];}
                j++;}
        for(i=0;i<k;i++){
            cout<<c[i]<<" ";}
}