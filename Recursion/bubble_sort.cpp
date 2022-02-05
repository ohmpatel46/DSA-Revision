#include<iostream>
using namespace std;

void bubble_sort_1(int*a, int n){
    if(n==1){
        return;
    }
    for(int j=0;j<n-1;j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
    }
    bubble_sort_1(a,n-1);
}

void bubble_sort_2(int* a, int n, int j){
    if(n==1){
        return;
    }
    if(j==n-1){
        bubble_sort_2(a,n-1,0);
        return;
    }
    if(a[j]>a[j+1]){
        swap(a[j],a[j+1]);
    }
    bubble_sort_2(a,n,j+1);
}

int main(){
    int arr[]={5,4,2,1,3};
    bubble_sort_1(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
    int a[5]={5,4,2,1,3};
    bubble_sort_2(a,5,0);
    for(int i=0;i<5;i++){
        cout<<a[i]<<",";
    }
}