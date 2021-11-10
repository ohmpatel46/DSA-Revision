//program to find the max sum subarray - time complexity O(n^2) - using cumulative sum
#include<iostream>
using namespace std;

int main(){
    int n,a[100],cumsum[100];
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    cout<<endl<<"Enter the values of the array: ";
    int i=1;
    cin>>a[0];
    cumsum[0]=a[0];
    for(i=1;i<n;i++){
        cin>>a[i];
        cumsum[i]=cumsum[i-1]+a[i]; 
    }
    int csum=0, maxsum=0,left=-1,right=-1;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int currentsum=0;
            currentsum= cumsum[j] - cumsum[i-1];
            if(currentsum>maxsum){
                maxsum=currentsum;
                left=i;
                right=j;
            }
        }
    }
    cout<<endl<<maxsum;
}