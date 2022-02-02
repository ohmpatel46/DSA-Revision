#include<iostream>
using namespace std;

int fibo(int n){
    if(n==0 || n==1){
        return n;
    }
    int f1=fibo(n-1);
    int f2=fibo(n-2);
    return f1+f2;
}

int main(){
    cout<<"Enter a number: ";
    int n;
    cin>>n;
    cout<<"The fibonnaci number is: "<<fibo(n);
}