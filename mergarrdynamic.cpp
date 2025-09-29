#include<bits/stdc++.h>
using namespace std;

int main() { 
    int n,m,i,j;
    cin>>n>>m;
    vector<int>v1(n);
    for(i=0;i<n;i++){
        cin>>v1[i];
    }
    vector<int>v2(m);
    for(i=0;i<m;i++){
        cin>>v2[i];
    }
    vector<int>v;
    i=0,j=0;
    while(i<n && j<m){
        if(v1[i]>=v2[j]){
            v.push_back(v2[j]);
            j++;
        }
        else{
            v.push_back(v1[i]);
            i++;
        }
    }
    while(i<n){
        v.push_back(v1[i]);
        i++;
    }
    while(j<m){
        v.push_back(v2[j]);
        j++;
    }
    for(auto x:v)
    cout<<x<<" ";
    cout<<endl;
}