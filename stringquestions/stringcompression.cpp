#include<iostream>
using namespace std;

string strcompress(string s1);

int main(){
    string s1;
    cout<<"Enter the string the to compress: ";
    cin>>s1;
    s1=strcompress(s1);
    cout<<"The compressed string is: "<<s1;

}

string strcompress(string s1){
    char last=s1[0];
    int cnt=1;
    string s2;
    s2+=s1[0];
    for(int i=1;i<s1.length();i++){
        if(s1[i]==last){
            cnt++;
        }
        else{
            s2+=to_string(cnt);
            cnt=1;
            last=s1[i];
            s2+=last;
        }
    }
    s2+=to_string(cnt);
    return(s2);
}