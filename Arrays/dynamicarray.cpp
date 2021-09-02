//this is not applicable to C language, only C++ 
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    int a[n]={0,1,2,3,4};
    cout<<a[2];
    // Now useing a pointer array
    int *p=new int[5];
    int *q=new int[10];
    for(int i=0;i<5;i++){
        p[i]=i*5;
    }//assigns 0,5,10,15,20 to the array pointed by p
    q=p;
    //now q points to the address p was pointing to
    p=NULL;
    // now p does not point to any address
    cout<<q[2]<<endl;
    //prints 10
    cout<<endl<<p[2];
    //prints nothing
    delete[] p;
    delete[] q;
    return 0;

}