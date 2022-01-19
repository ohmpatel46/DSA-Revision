#include<iostream>
using namespace std;
int countSetBits(int n){
    int ans=0;
    while(n>0){
        ans+=n&1;
        n=n>>1;
    }
    return ans;
}

int countSetBitsFast(int n){
    int ans;
    while(n>0){
        n=n&(n-1);
        ans++;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"The number of set bits in this number are: ";
    cout<<countSetBits(n)<<endl<<countSetBitsFast(n)<<endl<<__builtin_popcount(n);
}