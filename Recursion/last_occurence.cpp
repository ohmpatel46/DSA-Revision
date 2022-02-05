#include<iostream>
using namespace std;

int lastOccurence(int* a,int n,int i,int key){
    if(i==n){
        return -1;
    }
    int x=lastOccurence(a,n,i+1,key);
    if(x==-1){
        if(a[i]==key){
            return i;
        }
        else{
            return -1;
        }
    }
    else{
        return x;
    }
}

void allOccurences(int *a,int n,int i,int key){
    if(i==n){
        return;
    }
    if(a[i]==key){
        cout<<i<<endl;
    }
    allOccurences(a,n,i+1,key);
}

int main(){
    int a[]={1,2,3,4,7,5,8,7,7,8},key,n=10,i=0;
    cout<<"Enter key: ";
    cin>>key;
    cout<<"The last occurence of the key is: "<<lastOccurence(a,n,i,key)<<endl;
    cout<<"All occurences of the key are: ";allOccurences(a,n,i,key);
}