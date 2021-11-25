#include<iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter a string in Camel Case: ";
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]>='A'&&s[i]<='Z'&&i>0){
            cout<<endl;
        }
        cout<<s[i];
    }
}