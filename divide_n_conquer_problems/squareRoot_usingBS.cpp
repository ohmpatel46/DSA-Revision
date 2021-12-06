#include<iostream>
using namespace std;

float find_decimal(float ans,int n,int p){ //p is precision in terms of number of decimals
    float inc=0.1;
    for(int i=0;i<p;i++){
    while(ans*ans<=n){
        ans+=inc;
    }
    ans-=inc;
    inc/=10;
    }
    return ans;
}

float sq_root(int n){
    int s=0,e=n,mid,ans=-1;
    float f;
    while(s<=e){
        mid=(s+e)/2;
        if(mid*mid==n){
            return mid;
        }
        if(mid*mid<n){
            ans=mid;
            s=mid+1;
        }
        else if(mid*mid>n){
            e=mid-1;
        }
    } 
    f= find_decimal(ans,n,2);
    return f;
}   

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"the lower bound of its square root is: "<<sq_root(n);
}