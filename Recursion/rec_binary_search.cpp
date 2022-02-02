#include<iostream>
using namespace std;

int bin_search(int *a,int s,int e,int n){
    int m=(s+e)/2;
    if(s==e){
        return -1;
    }
    if(n==a[m]){
        return m;
    }
    if(n>a[m]){
        return bin_search(a,s+m,e,n);
    }
    if(n<a[m]){
        return bin_search(a,s,e-m,n);
    }
}

int main(){
    int arr[]={2,4,6,8,10,16,17};
    cout<<bin_search(arr,0,6,4)<<endl;
}