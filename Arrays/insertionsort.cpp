#include<iostream>
using namespace std;

void insertion_sort(int a[], int n){
    for(int i=1;i<n;i++){
        int e= a[i];
        int j=i-1;
        while(j>=0 && a[j]>e){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=e;
    }
};

int main(){
    int n,a[100];
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    cout<<endl<<"Enter the values of the array: ";
    int i=0;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    insertion_sort(a,n);
}