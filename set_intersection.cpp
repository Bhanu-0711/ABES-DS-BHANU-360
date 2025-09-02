#include <bits/stdc++.h>
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
    int c[4],j=0,k=0;
    i=0;
    while(i<n && j<m){
        if(a[i]==b[j]){
               c[k++]=a[i];
                i++;
                j++;}
        else if(a[i]<b[j]){
                i++;}
        else{
            j++;
        }}
        for(i=0;i<k;i++){
            cout<<c[i]<<" ";}

}