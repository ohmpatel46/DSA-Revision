#include<iostream>
using namespace std;

bool compare(int a,int b){
    return a>b;
}

void bubble_sort(int a[], int n, bool (&cmp)(int a,int b)){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(cmp(a[j],a[j+1])){
                swap(a[j],a[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
};

int main(){
    int n,a[100];
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    cout<<endl<<"Enter the values of the array: ";
    int i=0;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    bubble_sort(a,n,compare);
}