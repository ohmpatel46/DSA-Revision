#include<iostream>
using namespace std;

int main(){
    int* a=new int[100]{0}; // initializing with 0
    cout<<a<<endl;
    for(int i=0;i<100;i++){
        cout<<a[i]<<" ";
    }
    delete[] a;
}