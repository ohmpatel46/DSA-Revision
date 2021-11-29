#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a, int b){
    return a<=b;
}

int main(){
    int money[]={1,2,5,10,20,50,100,200,500,2000};
    int amt,n,index;
    int* lb;
    n=sizeof(money)/sizeof(money[0]);
    cout<<"Enter the whole amount: ";
    cin>>amt;
    cout<<"The change is: "<<endl;
    while(amt>0){
    lb=lower_bound(money,money+n,amt,compare);
    index=lb-money-1;
    cout<<money[index]<<",";
    amt-=money[index];
    }

}