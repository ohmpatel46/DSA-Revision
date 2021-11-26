#include<iostream>
using namespace std;

int main(){
    int x=10;
    float y=20;
    char z='A';

    cout<<"Address of x is: "<<&x<<endl;
    cout<<"Address of y is: "<<&y<<endl;
    //for char we have to use explicit typecasting (exception), otherwise the value will be printed instead of the address
    cout<<"Address of z is (without typecasting): "<<&z<<endl;
    cout<<"Address of z is (with typecasting): "<<(void*)&z<<endl;

    int* x_ptr = &x;
    float* y_ptr= &y;
    char* z_ptr= &z;

    cout<<"Address of x is: "<<x_ptr<<endl;
    cout<<"Address of y is: "<<y_ptr<<endl;
    cout<<"Address of z is (without typecasting): "<<z_ptr<<endl;
    cout<<"Address of z is (with typecasting): "<<(void*)z_ptr<<endl;

    cout<<"Value of x is: "<<*x_ptr<<endl;
    cout<<"Value of y is: "<<*y_ptr<<endl;
    cout<<"Value of z is (without typecasting): "<<z_ptr<<endl;

}