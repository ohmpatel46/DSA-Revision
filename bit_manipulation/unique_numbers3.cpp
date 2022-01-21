#include<iostream>
using namespace std;

int getLastBit(int n){
    int x=1;
    return n&x>0?1:0;
}

int main(){
    int a[10],n,cnt[10]={0},j,res=0;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
        j=0;
        while(a[i]>0){
            cnt[j]+=getLastBit(a[i]);
            j++;
            a[i]=a[i]>>1;
        }
    }
    for(int i=0;i<sizeof(cnt)/sizeof(cnt[0]);i++){
        if(cnt[i]%3!=0){
            res += 1<<i;
        }
    }
    cout<<"The unique number is: "<<res;
}