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
    vector<int>v(m+n);
    merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v.begin());
    for(auto x:v){
    cout<<x<<" ";}
    cout<<endl;
}
