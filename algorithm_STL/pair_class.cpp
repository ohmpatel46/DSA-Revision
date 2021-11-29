#include<iostream>
using namespace std;

int main(){
    //first way to define
    pair<int,char> a;
    a.first=10;
    a.second='t';
    cout<<"First Pair: "<<a.first<<" "<<a.second<<endl; 
    //second way to define
    pair<int,string> b=make_pair(10,"ten");
    cout<<"Second Pair: "<<b.first<<" "<<b.second<<endl; 
    //initializing as another pair
    pair<int,string> p(b);
    cout<<"Third Pair: "<<p.first<<" "<<p.second<<endl; 
    //pair consiting of a pair and another datatype
    pair<pair<int,int>,string> x;
    x.first.first=1;
    x.first.second=0;
    x.second="ten";
    cout<<"Fourth Pair: "<<p.first<<" "<<p.second<<endl; 
}