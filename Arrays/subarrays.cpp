//program to print all the subarrays of an array
#include<iostream>
using namespace std;

int main(){
    int n,a[100];
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    cout<<endl<<"Enter the values of the array: ";
    int i=0;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<a[k]<<",";
            }
            cout<<endl;
        }
    }
}