#include<iostream>
using namespace std;

int main(){
    int b[10]={1,2,3};
    cout<<b<<endl;
    //prints out starting address of array (default behaviour for non-char arrays)
    char a[]={'a','f','k','\0'};
    cout<<endl<<a<<endl;
    //prints the whole cahracter array
    char s[3];
    cin>>s[0];//char arrays can be read using cin directly (null character is added automatically to the end of the char array)
    cout<<endl<<s<<endl<<sizeof(s)<<endl;
    char c[]="bru";
    cout<<endl<<sizeof(c);

    //Therefore, its important to terminate char arrays with null , unless garbage values might be printed
} 