#include<iostream>
using namespace std;

int bin_search(int a[],int key,int n){
    int start,end,mid;
    start=0;
    end=n-1;
    for(int i=start;start<=end;i++){
        mid=(start+end)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]<key){
            start=mid+1;
        }
        else if(a[mid]>key){
            end=mid-1;
        }
    }
    return -1;
};

int main(){
    int n,a[100],key;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    cout<<endl<<"Enter the sorted values of the array: ";
    int i=0;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the element to be searched: ";
    cin>>key;
    int x=bin_search(a,key,n);
    if(x!=-1){
        cout<<"The element is found at index "<<x;
    }
    else{
        cout<<"Element not found";
    }
    
}