#include<iostream>
using namespace std;

void selection_sort(int a[], int n){
    for(int i=0;i<=n-1;i++){
        int min_index=i,temp;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min_index]){
                min_index=j;
            }
        }
        temp=a[i];
        a[i]=a[min_index];
        a[min_index]=temp;
        cout<<a[i]<<" ";
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
    selection_sort(a,n);
}