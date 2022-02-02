#include<iostream>
using namespace std;

bool isSorted(int *a,int n){
    if(n==0 || n==1){
        return true;
    }
    if(a[0]<a[1] && isSorted(a+1,n-1)){
        return true;
    }
    return false;
}

int main(){
    int arr1[]={1,3,5,7,9};
    int arr2[]={4,2,3,5,9};
    cout<<isSorted(arr1,5)<<endl;
    cout<<isSorted(arr2,5)<<endl;
}