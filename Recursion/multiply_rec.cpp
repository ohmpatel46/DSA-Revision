#include<iostream>
using namespace std;

int multiply(int m, int n){
    if(n==0){
        return 0;
    }
    return m+multiply(m,n-1);
}

int main(){
    int m,n;
    cout<<"Enter 2 numbers: ";
    cin>>m>>n;
    cout<<"The product is: "<<multiply(m,n);
}