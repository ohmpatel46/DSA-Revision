#include<iostream>
using namespace std;
int main(){
    int l,b,sum,x1,x2,y1,y2;
    cout<<"Enter the length and breadth of the matrix";
    cin>>l>>b;
    int a[l][b];
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> a[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<l;i++){
        for(int j=1;j<b;j++){
            a[i][j]+=a[i][j-1];
        }
    }
    for(int j=0;j<b;j++){
        for(int i=1;i<l;i++){
            a[i][j]+=a[i-1][j];
        }
    }
    cout<<"Enter top corner (x y): ";
    cin>>x1>>y1;
    cout<<"Enter bottom corner (x y): ";
    cin>>x2>>y2;
    for (int i = x1; i <=x2; i++)
    {
        for (int j = y1; j <=y2; j++)
        {
            sum+=a[i][j];
        }
        
    }
    cout<<endl<<"The sum is: "<<sum;
}