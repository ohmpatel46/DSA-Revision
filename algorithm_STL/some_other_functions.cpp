// swap,min,max,reverse
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a[]={1,2,3,4,5,6};
    int b=5,c=10;
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"The values of b and c are: "<<b<<" "<<c<<endl;
    swap(b,c);
    cout<<"The swapped values of b and c are: "<<b<<" "<<c<<endl;
    cout<<"The array a is: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    swap(a[0],a[1]);
    cout<<"The array a with first 2 swapped is: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    reverse(a,a+3);
    cout<<"The array a with first 3 reversed is: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"The minimum of b and c is: "<<min(b,c)<<endl;
    cout<<"The maximum of b and c is: "<<max(b,c)<<endl;

}