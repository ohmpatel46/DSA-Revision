#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a, int b){
    return a<b;
    // for decreasing order just return a>b 
}

int main(){
    int n,a[100];
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    cout<<endl<<"Enter the values of the array: ";
    int i=0;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    //The starting index is included but the last is excluded
    sort(a,a+n,compare);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}