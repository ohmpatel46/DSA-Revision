#include<iostream>
using namespace std;

int helpRahul(int a[1000],int n,int key);

int main(){
    int a[1000],n,key,pos;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter the elements of the array:\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the element to be searched: ";
    cin>>key;
    pos=helpRahul(a,n,key);
    cout<<"The position at which the element is present is: "<<pos;
}

int helpRahul(int a[1000],int n, int key){
    int s=0,e=n-1,mid;
    while(s<=e){
        mid=(s+e)/2;
        if(a[mid]==key){
            return mid;
        }
        // we look for the sorted part of the array in the next 2 conditions so that we can perform binary search on that part
        else if(a[s]<=a[mid]){
            if(key<=a[mid]&& key>=a[s]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        else{
            if(key>=a[mid] && key<=a[e]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
    }
    return -1;
}