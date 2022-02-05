#include<iostream>
using namespace std;

int power(int n, int p){
    if(p==0){
        return 1;
    }
    return n*power(n,p-1);
}

int fast_power(int n,int p){
    if(p==0){
        return 1;
    }
    int small_ans=fast_power(n,p/2);
    small_ans*=small_ans;
    if(p&1){
        return n*small_ans;
    }
    return small_ans;
}

int main(){
    cout<<"Enter a number and exponent: ";
    int n,p;
    cin>>n>>p;
    cout<<"The answer is: "<<power(n,p)<<endl;
    cout<<"The answer is: "<<fast_power(n,p);
}