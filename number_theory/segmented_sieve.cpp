#include<iostream>
#include<vector>
const int N=100000;
using namespace std;

int main(){
    int nums[N]={1},m,n;
    vector<int> primes;
    for(int i=2;i<N;i++){
        if(nums[i]==1){
            primes.push_back(i);
            for(int j=i*i;j<N;j+=i){
                nums[i]=0;
            }
        }
    }
    cout<<"Enter the lower and upper limit: ";
    cin>>m>>n;
    int segment[m-n+1]={1};
    for(int i=0;primes[i]*primes[i]<n;i++){
        int start= (m/primes[i])*primes[i];
        if(primes[i]>m && primes[i]<n){
            start=primes[i]*2;
        }
        for(int j=start;j<n;j+=primes[i])
        {
            segment[j-m]=0;
        }
    }
    for(int i=0;i<n-m+1;i++){
        if(segment[m-i]==1 && i!=1){
            cout<<m+i<<",";
        }
    }
}