#include<iostream>
using namespace std;

void merge(int* a,int s,int e){
    //merge will be applied on every block as the array gets split recursively
    int mid=(s+e)/2;
    int i=s;
    int j=mid+1;
    int k=s;
    int temp[100];
    while(i<=mid && j<=e){
        if(a[i]>a[j]){
            temp[k++]=a[j++];
        }
        else{
            temp[k++]=a[i++];
        }
    }
    while(i<=mid){
        temp[k++]=a[i++];
    }
    while(j<=e){
        temp[k++]=a[j++];
    }

    for(int x=s;x<=e;x++){
        a[x]=temp[x];
    }
}

void merge_sort(int* a,int s,int e){
    int mid=(s+e)/2;
    //will seperate each block
    if(s>=e){
        return;
    }
    //splitting into 2 arrays
    merge_sort(a,s,mid);
    merge_sort(a,mid+1,e);
    //merging split arrays
    merge(a,s,e);
}

int main(){
    int arr[]={5,6,1,2,4,0};
    merge_sort(arr,0,5);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<",";
    }
}