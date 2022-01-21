#include<iostream>
using namespace std;
string generate_subset(int n, string s){
    string res="";
    for(int i=0;n>0;i++){
        if(n&1>0){
            res+=s[i];
        }
        n=n>>1;
    }
    return res;
}
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    cout<<"The subsets of the string are: \n";
    for(int i=0;i<(1<<s.length());i++){
        cout<<generate_subset(i,s)<<endl;
    }
}