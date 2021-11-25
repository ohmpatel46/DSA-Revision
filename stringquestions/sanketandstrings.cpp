//wrong solution
#include<iostream>
using namespace std;

int calcMaxLength(string s, int k){
    int lar=0;
    for(int i=0;i<s.length();i++){
        for(int j=i+1;j<=i+k+1;j++){
            if(s[i]==s[j]){
                if(j-i+1>lar){
                    lar=j-i+1;
                }
            }
        }
    }
    return lar;
}

int main(){
    int k,max;
    string s;
    cout<<"Enter max number of alterations: ";
    cin>>k;
    cout<<"Enter the string: ";
    cin>>s;
    max=calcMaxLength(s,k);
    cout<<"The macimum length of the perfect string is: "<<max;
}