#include<iostream>
using namespace std;

int main(){
    int rows,cols;
    cout<<"Enter rows and columns: ";
    cin>>rows>>cols;
    int a[rows][cols];
    cout<<"Enter rows and columns values: "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>a[i][j];
        }
    }
    cout<<"The Waveprint of the 2-D array is: "<<endl;
    for(int i=0;i<cols;i++){
        if(i%2==0){
            for(int j=0;j<rows;j++){
                cout<<a[j][i]<<" ";
            }
        }
        else{
            for(int j=rows-1;j>=0;j--){
                cout<<a[j][i]<<" ";
            }
        }
        cout<<endl;
    }
}