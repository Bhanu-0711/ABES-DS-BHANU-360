#include<iostream>
#include<vector>
using namespace std;
int main(){
    //capacity and size of a vector
    vector<int>v;
    cout<<"Size of vector 1"<<v.size()<<endl;
    cout<<"capacity of vector 1"<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Size of vector 1"<<v.size()<<endl;
    cout<<"capacity of vector 1"<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Size of vector 1"<<v.size()<<endl;
    cout<<"capacity of vector 1"<<v.capacity()<<endl;
    v.push_back(6);
    cout<<"Size of vector 1"<<v.size()<<endl;
    cout<<"capacity of vector 1"<<v.capacity()<<endl;
    v.push_back(9);
    cout<<"Size of vector 1"<<v.size()<<endl;
    cout<<"capacity of vector 1"<<v.capacity()<<endl;

    for (int i=0;i<v.size();i++)
        cout<<v.at(i)<<" ";
    cout<<endl;
    for(auto value:v)
        cout<<value<<" ";
    cout<<endl;
    v.pop_back();
    for(auto value:v)
        cout<<value<<" ";
    cout<<endl;
    
    cout<<"Front Value: "<<v.front()<<" "<<"Last Value: "<<v.back()<<endl;
    
    // inserting at a position
    //1
    v.insert(v.begin(),4);
     for(auto value:v)
        cout<<value<<" ";
    cout<<endl;
    //2
    v.insert(v.begin()+2,10);
     for(auto value:v)
        cout<<value<<" ";
    cout<<endl;
    cout<<"Capacity of vector: "<<v.capacity()<<endl;
    cout<<"size of vector: "<<v.size()<<endl;
    //2
    v.insert(v.begin()+3,3,11);
    for(auto value:v)
        cout<<value<<" ";
    cout<<endl;
    
    //for deleting elements from start and last one is excluded from deleation
    v.erase(v.begin(),v.begin()+3);
    for(auto value:v)
        cout<<value<<" ";
    cout<<endl;
    // initializing a vector
    vector<int>v1={1,2,3,4,5};
    for(auto v:v1)
        cout<<v<<" ";
    cout<<endl;
    
    vector<int>v2(3,5);
    for(auto v:v1)
        cout<<v<<" ";
    cout<<endl;
    
    //iterator
    vector<int>::iterator itr;
    for(auto itr=v.begin();itr!=v.end();itr++)
        cout<<*(itr)<<" ";
    cout<<endl;
    
    vector<int>::reverse_iterator rit;
     for(auto rit=v.end();rit!=v.begin();rit++)
        cout<<*(rit)<<" ";
    cout<<endl;
    
    
    
    
    
    
    
    
    
    
    
    
}