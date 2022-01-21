#include<iostream>
#define ll long long
using namespace std;
int main(){
    ll subsets,ans=0,n;
    int primes[8]={2,3,5,7,11,13,17,19};
    subsets=(1<<8)-1; // -1  because the empty set is not counted
    cout<<"Enter the upper limit: ";
    cin>>n;
    for(ll i=1;i<=subsets;i++){ // 2^8-1 combinations of the prime numbers are possible, have to remove intersections
        ll denominator= 1;
        ll setBits= __builtin_popcount(i); // counting number of set bits
        for(int j=0;j<8;j++){
            if(i&(1<<j)){ // checking the value of each bit 
                denominator=denominator*primes[j]; // if 1, i.e if the bit is set, corresponding array element goes into denominator
            }
        }
        if(setBits&1){ // even subsets get subtracted
            ans+=n/denominator; // count of numbers divisible by the denominator  
        }
        else{
            ans-=n/denominator;
        }
    }
    cout<<"The count of numbers divisible by the prime numbers within the range are: "<<ans;
}