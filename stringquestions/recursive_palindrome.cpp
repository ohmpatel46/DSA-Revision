#include<iostream>
using namespace std;
bool checkPalindrome(string a,int i,int n){
    if(i==n/2) return true;
    if(a[i-1]!=a[n-i]) return false;
    checkPalindrome(a,i+1,n);
};
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    bool res=checkPalindrome(s,1,s.length());
    if(res){
        cout<<"It is a palindrome!";
    }
    else{
        cout<<"Not a palindrome :(";
    }
}