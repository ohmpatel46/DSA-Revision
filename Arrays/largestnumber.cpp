#include<iostream>
using namespace std;

int main(){
    int n,a[100];
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    cout<<endl<<"Enter the value sof the array";
    int i=0;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int largest=a[0],smallest=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>largest){
            largest=a[i];
        }
        if(a[i]<smallest){
            smallest=a[i];
        }
    }
    cout<<endl<<"The largest number in the array is "<<largest<<endl;
    cout<<endl<<"The smallest number in the array is "<<smallest<<endl;
}