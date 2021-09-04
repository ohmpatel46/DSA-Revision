#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[100];
    bool flag=true;
    cin.getline(a,100,'\n');
    for(int i=0;i<strlen(a);i++){
        if(a[i]!=a[strlen(a)-i-1]){
            flag=false;
            break;
        }
    }
    if(flag==false){
        cout<<endl<<"not a palindrome";
    }
    else{
        cout<<endl<<"A palindrome";
    }
}