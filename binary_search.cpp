#include<bits/stdc++.h>
using namespace std;


int main() { 
  vector<int>v;
  int val,ele;
  while(true){
    cin>>val;
    if(val==-1){
        break;
    }
    else{
        v.push_back(val);
    }
  }
  cin>>ele;
  if(binary_search(v.begin(),v.end(),ele));
  return 0;
}
