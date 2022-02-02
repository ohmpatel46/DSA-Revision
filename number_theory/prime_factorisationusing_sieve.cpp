#include<iostream>
#include<vector>
using namespace std;

vector<int> prime_sieve(int *arr, int n){
    arr[0]=1,arr[1]=1;
    for(int i=2;i<=n;i+=2){
        arr[i]=1;
    }
    for(int i=3;i<=n;i+=2){
        if(arr[i]==0){
            for(int j=i*i;j*j<n;j+=2*i){
                arr[j]=1;
            }
        }
    }
    vector<int> primes;
    primes.push_back(2);
    for(int i=3;i<n;i++){
        if(arr[i]==0)
            primes.push_back(i);
    }
    return primes;
}

vector<int> prime_factors(vector<int> primes, int n){
    int i=0;
    int p=primes[i];
    vector<int> factors;
    while((p*p<n)&&(n!=1)){
        if(n%p==0){
            while(n%p==0){
            n=n/p;
            factors.push_back(p);
            }
        }
        i++;
        p=primes[i];
    }
    if(n!=1){
        factors.push_back(n);
    }
    return factors;
}

int main(){
    const int N=100000;
    int p[N]={0};
    int t,n;
    vector<int> primes=prime_sieve(p,100);
    cout<<"Enter the number of testcases: ";
    cin>>t;
    for(int i=0;i<t;i++){
        cout<<"\n\nEnter the number: ";
        cin>>n;
        vector<int> factors=prime_factors(primes,n);
        for(int j=0;j<factors.size();j++){
            cout<<factors[j]<<",";
        }
    }
    
}