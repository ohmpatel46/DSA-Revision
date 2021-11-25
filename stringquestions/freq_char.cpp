#include<iostream>
using namespace std;

int main(){
    string s;
    int maxInt=0;
    char maxChar;
    cin>>s;
    int freq[100]={0};
    for(int i=0;i<s.length();i++){
        freq[s[i]-'A']++;
    }
    for(int i=0;i<100;i++){
        if(freq[i]>0){
            if(freq[i]>maxInt){
                maxInt=i;
            }
        }
    }
    maxChar='A'+maxInt;
    cout<<"The character with the highest frequency is: "<<maxChar;
}