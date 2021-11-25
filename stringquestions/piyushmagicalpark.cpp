#include<iostream>
using namespace std;

// void charinputs(char a[],int row,int col){
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cin>>
//         }
//     }
// }

int calcEnergy(char c,int e){
    if(c=='#'){
        return -1;
    }
    else if(c=='.'){
        e-=2;
    }
    else if(c=='*'){
        e+=5;
    }
    e--;
    return e;
}

int main(){
    int row,col,k,s,temp;
    cout<<"Enter the number of rows, columns, min. energy and starting energy: ";
    cin>>row>>col;
    cin>>k>>s;
    char a[row][col];
    cout<<"Enter the characters:\n";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>a[i][j];
        }
    }
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(s<k){
                cout<<"lmao ded";
                return 0;
            }
            temp=calcEnergy(a[i][j],s);
            if(temp==-1)
            {
                break;
            }
            else{
                s=temp;
            }
        }
    }
    cout<<"Piyush escaped the park!!";
}