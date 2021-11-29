// new a[r][c] does not exist. we need to create several dynamically allocated 1-D arrays and map their 
//starting addresses to an array of pointers
#include<iostream>
using namespace std;

int main(){
    int r,c;
    int **arr;
    cout<<"Enter the number of rows and columns: ";
    cin>>r>>c;
    arr=new int*[r];
    int* b;
    for(int i=0;i<r;i++){
        arr[i]=new int[c]{i};
    }
    for(int i=0;i<r;i++){
        delete[] arr[i];
    }
    delete[] arr;
}