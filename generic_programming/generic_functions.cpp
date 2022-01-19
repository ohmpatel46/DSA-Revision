#include<iostream>
using namespace std;

template<class T> //defining a generic datatype T

int search(T a[],int n,T key){
    for(int i=0;i<n;i++){
        if(key==a[i]){
            return i;
        }
    }
    return -1;
};

int main(){
    float a[]={2.1,2.5,6.7,6.9};
    int b[]={1,0,3,7,9,6};
    int i;float j;
    cout<<"Enter integer to be searched: ";
    cin>>i;
    cout<<i<<" is at index "<<search(b,6,i)<<endl;
    cout<<"Enter float to be searched: ";
    cin>>j;
    cout<<j<<" is at index "<<search(a,4,j)<<endl;
}