#include<iostream>
using namespace std;
// Given a lst of 2n+1 numbers out of which one is unique and others are repeated twice, find the unique number
int main(){
    int n,y=0,x;
    cout<<"Enter the number of numbers: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        y=y^x;
    }
    cout<<"The unique number is: "<<y;
}