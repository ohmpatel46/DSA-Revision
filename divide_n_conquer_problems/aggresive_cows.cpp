#include<iostream>
#include<algorithm>
using namespace std;

int canKeepCows(int cows, int stalls, int arr[100], int min_sep){
    int last_cow=arr[0],cnt=1;
    for(int i=0;i<stalls;i++){
        if(arr[i]-last_cow>=min_sep){
            last_cow=arr[i];
            cnt++;
            if(cnt==cows){
                return true;
            }
        }
    }
    return false;
};

int aggro_cows(int cows, int stalls, int arr[100]){
    int e=arr[stalls-1]-arr[0];
    int s=0;
    int mid,ans=-1;
    while(s<=e){
        mid=(s+e)/2;
        if(canKeepCows(cows,stalls,arr,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
};

int main(){
    int N,C,S[100];
    cout<<"Enter the number of stalls and the number of cows: ";
    cin>>N>>C;
    cout<<"Enter the positions of the stalls: ";
    for(int i=0;i<N;i++){
        cin>>S[i];
    }
    sort(S,S+N);
    cout<<"The largest minimum distance between 2 cows is: "<<aggro_cows(C,N,S);
}