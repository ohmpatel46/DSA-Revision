#include<iostream>
using namespace std;

int main(){
    int x=10;
    int* x_ptr=&x;
    //double start, one for syntax of pointer, other to represent data type that it points to (int*)
    int** xx_ptr=&x_ptr;

    cout<<&x<<endl;
    cout<<x_ptr<<endl;

    cout<<*(&x)<<endl;
    cout<<*x_ptr<<endl;

    cout<<*(&x_ptr)<<endl;
    cout<<&(*x_ptr)<<endl;

    cout<<&x_ptr<<endl;
    cout<<xx_ptr<<endl;
}