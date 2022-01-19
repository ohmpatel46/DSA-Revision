#include<iostream>
using namespace std;

int main(){
    cout<<"Enter N and M: ";
    int n,m,i,j;
    cin>>n>>m;
    cout<<"Enter the range of bits to be reset: ";
    cin>>i>>j;
    int submask1=~0;
    submask1=submask1<<(j+1);
    int submask2=~0;
    submask2=~(submask2<<i);
    int mask=submask1|submask2;
    n=n & mask;
    m=m<<i;
    n=n|m;
    cout<<n;
}