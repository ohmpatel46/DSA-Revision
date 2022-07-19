#include<iostream>
using namespace std;

int partition(int* a,int s,int e){
    int i=s-1;
    int j=s;
    int pivot=a[e];
    for(;j<e;j++){
        if(a[j]<=pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[e]);
    return i+1;
}

void quicksort(int* a, int s, int e){
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
    int p=partition(a,s,e);
    quicksort(a,s,p-1);
    quicksort(a,p+1,e);
}

int main(){
    int arr[]={2,7,8,6,1,5,4};
    int n=sizeof(arr)/sizeof(arr[0]);

    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
}