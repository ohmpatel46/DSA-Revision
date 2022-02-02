#include<iostream>
using namespace std;

int main(){
    int n,sum=0,x,temp;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the number to check divisibility by: ";
    cin>>x;
    int buckets[x]={0};
    buckets[0]=1; // because null subarray is always divisible
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
        arr[i]=sum;
        temp=arr[i]%x;
        buckets[temp]++;
    }
    sum=0;
    for(int i=0;i<x;i++){
        sum+=((buckets[i])*(buckets[i]-1))/2;
    }
    cout<<"The number of divisible subarrays is: "<<sum;
}