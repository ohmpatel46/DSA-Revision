#include<iostream>
#include<string>
using namespace std;

int main(){
    //String Init
    string s0;
    string s1("Hello");
    string s2="Hello World";
    string s3(s2); // assigns s2 object to s3 object
    string s4=s3;
    char a[]={'a','b','c','\0'};
    string s5(a);
    cout<<s1<<endl<<s2<<endl<<s3<<endl<<s4<<endl<<s5<<endl;
    if(s0.empty()){
        cout<<"s0 is an empty string"<<endl;
    }
    s0.append("Hey there");
    cout<<s0<<endl;
    s0+=" how you doing";
    cout<<s0<<endl;
}