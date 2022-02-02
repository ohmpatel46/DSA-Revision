#include<iostream>
using namespace std;

int main(){
    int N;
    cout<<"Enter the upper limit: ";
    cin>>N;
    int primes[N]={0};
    primes[0]=0;primes[1]=0;primes[2]=1;
    for(int i=3;i<=N;i+=2){
        primes[i]=1;
    }
    for(int i=3;i*i<=N;i+=2){
        for(int j=i*i;j<=N;j+=i){
            primes[j]=0;
        }
    }
    for(int i=0;i<N;i++){
        if(primes[i]==1){
            cout<<i<<",";
        }
    }
}