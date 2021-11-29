#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int key=0;
    cout<<"Starting address of the array is: "<<a<<endl;

    cout<<"Enter key to be searched: ";
    cin>>key;
    auto i=find(a,a+n,key); // can also use int* instead of auto
    cout<<"Key found at address: "<<i<<endl;
    int index=i-a;
    cout<<"Index at which "<<a[index]<<" is found, is: "<<index;
}