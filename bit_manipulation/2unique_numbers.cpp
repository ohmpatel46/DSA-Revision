#include<iostream>
#include<vector>
using namespace std;
int getSetBit(int n){
    int i=0;
    while((n&1)!=1){
        i++;
        n>>1;
    }
    return i;
}
void getUniqueNumbers(vector<int> a,int n){
    int xr=0,xr1=0;
    for(int i=0;i<n;i++){
        xr=xr^a[i];
    }
    int pos=getSetBit(xr);
    int mask=1<<pos;
    for(int i=0;i<n;i++){
        if((mask&a[i])!=0){
            xr1=xr1^a[i];
        }
    }
    cout<<"The Two Numbers are:\n"<<min(xr1,(xr1^xr))<<endl<<max(xr1,(xr1^xr));
};
int main(){
    vector<int> a;
    int n,x;
    cout<<"Enter the total number of numbers: ";
    cin>>n;
    cout<<"Enter a series of numbers with only 2 unique numbers (and pairs of non-unique numbers): ";
    for(int i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }
    getUniqueNumbers(a,n);
}