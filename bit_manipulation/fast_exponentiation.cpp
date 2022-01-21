#include<iostream>
using namespace std;
int main(){
    int n,e,res=1;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter the power: ";
    cin>>e;
    while(e>0){
        if((e&1)==1){
            res*=n;
        }
        e=e>>1;
        n=n*n;
    }
    cout<<"The answer is: "<<res;
}