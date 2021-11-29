#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a, int b){
    return a<b;
    // b<a for ascending, a>b for descending
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n,compare); //sort considers lower limit as included but upper limit not included
    // we are passing the compare function to the sort function as a parameter (not calling it anywhere)
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}