#include<iostream>
using namespace std;

int isOdd(int n){
    return n&1;
};

int getBit(int n,int i){
    int x=1;
    x=x<<i;
    return (x&n)>0?1:0;
};

void setBit(int &n,int i){
    int x=1;
    x=x<<i;
    n=x|n;
};

void clearBit(int &n,int i){
    int x=1;
    x=x<<i;
    x=~x;
    n=x&n;
};

void updateBit(int &n, int i, int v){
    clearBit(n,i);
    int x=v<<i;
    n=n|x;
};

int clearLasti(int &n, int i){
    int x=~0; // creates a mask with all 1s
    x=x<<i;
    n=n&x;
    return n;
};

int clearRangeitoj(int &n, int i, int j){
    int x=~0;
    x=x<<(j+1);
    int y=~0;
    y=y<<i;
    y=~y;
    x=x|y; //final mask
    n=n&x;
    return n;
};

int main(){
    int n,i,j;
    cout<<"Enter a number: ";
    cin>>n;
    // cout<<"\nThe number is odd(1) or even(0): "<<isOdd(n);
    // cout<<"\nEnter the index to be set: ";
    // cin>>i;
    // setBit(n,i);
    // cout<<"The index is: ";
    // cout<<getBit(n,i);
    // cout<<"\nEnter the index to be cleared: ";
    // cin>>i;
    // clearBit(n,i);
    // cout<<"\nThe index is: "<<getBit(n,i);
    cout<<"Enter range to clear: ";
    cin>>i>>j;
    cout<<clearRangeitoj(n,i,j);
}