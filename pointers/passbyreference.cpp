#include<iostream>
using namespace std;

void increment(int* a){
    *a+=1;
    cout<<"The value of A inside the function is: "<<*a<<endl;
}

int main(){
    int a=20;
    increment(&a);
    cout<<"The calue of A inside main is: "<<a;
}