#include<iostream>
using namespace std;

int main(){
    int n,search,a[100];
    cout<<"ENter the size of the array: ";
    cin>>n;
    cout<<"Enter the value sof the array";
    int i=0;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the element to be searched";
    cin>>search;
    for(i=0;i<n;i++){
        if(search==a[i]){
            cout<<"The element "<<search<<" has been found at index "<<i;
            break;
        }
    }
    if(i==n){
        cout<<"Element not found";
    }
}