#include<iostream>
using namespace std;

void spiralprint(int a[][100], int m, int n){
    int startcol=0,startrow=0,endcol=n-1,endrow=m-1;

    while(startrow<=endrow && startcol<=endcol){
        for(int j=startcol;j<=endcol;j++){
            cout<<a[startrow][j]<<" ";
        }
        startrow++;
        for(int i=startrow;i<=endrow;i++){
            cout<<a[i][endcol]<<" ";
        }
        endcol--;
        if(endrow>startrow){
        for(int i=endcol;i>=startcol;i--){
            cout<<a[endrow][i]<<" ";
        }
        endrow--;
        }
        if(endcol>startcol){
        for(int i=endrow;i>=startrow;i--){
            cout<<a[i][startcol]<<" ";
        }
        startcol++;
        }
    }

}

int main(){
    int rows,cols,a[100][100];
    cout<<"Enter the number of rows and columns: "<<endl;
    cin>>rows>>cols;
    cout<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>a[i][j];
        }
    }
    spiralprint(a,rows,cols);
}