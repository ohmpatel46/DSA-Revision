#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a[]={1,2,3,3,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int key=0;
    cout<<"Starting address of the array is: "<<a<<endl;

    cout<<"Enter key to be searched: ";
    cin>>key;
    //use binary_search only for sorted array
    bool it=binary_search(a,a+n,key);
    if(it){
        cout<<"Element is present!"<<endl;
    }
    else{
        cout<<"Element is absent!"<<endl;
    }
    auto lb=lower_bound(a,a+n,3); //returns address of first occurence of number greater than equal to key
    cout<<"The first occurence of 3 is at index: "<<lb-a<<endl;

    auto ub=upper_bound(a,a+n,3);//returns address of first occurence of number greater than key
    cout<<"The first occurence of number greater than 3 is at index: "<<ub-a<<endl;
}