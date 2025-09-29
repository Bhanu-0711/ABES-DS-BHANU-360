#include<bits/stdc++.h> 
using namespace std; 
void traverse(int arr[],int n) {    
    cout<<"Elements are:"<<endl;     
    for(int i=0;i<n;i++){         
        cout<<arr[i]<<" "; 
    } 
    cout<<endl; 
} 
int insertion(int arr[], int n, int x, int pos) {     
    for(int i=n;i>pos;i--){         
        arr[i]=arr[i-1]; 
    }   
    arr[pos]=x;     
    return n+1; 
} 
int deletion(int arr[],int n, int pos){     
    for(int i=pos;i<n-1;i++){     
        arr[i]=arr[i+1]; 
    } 
    return n-1; 
} 
int main(){     
    int arr[100],n,choice,pos,x;     
    cout<<"Enter the no. of elements in the array:";     
    cin>>n;     
    cout<<"Enter the elements:"<<endl;     
    for(int i=0;i<n;i++){         
        cin>>arr[i]; 
    }    
    do{ 
    cout<<"Choose:\n1.Traverse\n2.Insert\n3.Delete\n4.Exit\n";         
    cin>>choice;         
    switch(choice){             
        case 1:                 
            traverse(arr,n);                 
            break;             
        case 2: 
            cout<<"Enter the element that you want to insert: ";                 
            cin>>x;                 
            cout<<"Enter the position: ";                 
            cin>>pos;                  
            n=insertion(arr,n,x,pos-1);                  
            cout<<"After Insertion ";                  
            traverse(arr,n); 
            break;             
        case 3: 
            cout<<"Enter the position from which you want to delete: ";                 
            cin>>pos;                 
            n=deletion(arr,n,pos-1);                 
            cout<<"After Deletion ";                 
            traverse(arr,n);                 
            break;             
        case 4: 
            cout<<"You have exited!"<<endl; 
            break;             
        default: 
            cout<<"Enter a number from 1-4"<<endl; 
        } 
    }   
    while(choice!=4);     
    return 0; 
}