#include<iostream>
using namespace std;

bool isValid(int start, int end);
bool isCB(int a);
bool visited[20]={false};
int main(){
    int cnt=0;
    string s,r;
    bool CB_flag,Valid_flag;
    cout<<"Enter the string of numbers: ";
    cin>>s;
    for(int i=s.length();i>=1;i--){
        for(int j=0;j+i<=s.length();j++){
            r=s.substr(j,i);
            CB_flag=isCB(stoi(r));
            if(CB_flag==true){
                Valid_flag=isValid(j,j+i-1);
                if(Valid_flag==true){
                    cnt++;
                    for(int k=j;k<=j+i-1;k++){
                        visited[k]=true;
                    }
                }
            }
        }
    }
    cout<<"The maxuimum no. of CBNumbers in the given string are: "<<cnt<<endl;
}

bool isCB(int a){
    int arr[]={2,3,5,7,11,13,17,19,23,29};
    if(a==0||a==1){
        return false;
    }
    else{
        for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
            if(a==arr[i]){
                break;
            }
            else if(a%arr[i]==0){
                return false;
            }
        }
    }
    return true;
}

bool isValid(int start, int end){
    for(int i=start;i<=end;i++){
        if(visited[i]==false){
            return true;
        }
    }
    return false;
}