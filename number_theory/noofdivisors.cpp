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

int no_of_divisors(vector<int> primes, int n){
    int i=0;
    int ans=1;
    int p=primes[i];
    vector<int> factors;
    while((p*p<n)&&(n!=1)){
        int cnt=0;
        if(n%p==0){
            while(n%p==0){
            n=n/p;
            cnt++;
            }
        }
        ans*=(cnt+1);
        i++;
        p=primes[i];
    }
    if(n!=1){
        ans*=2;
    }
    return ans;
}

int main(){
    const int N=10000;
    int p[N]={0},n;
    vector<int> prime=prime_sieve(p,100);
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"The number of divisors is: "<<no_of_divisors(prime,n);

}