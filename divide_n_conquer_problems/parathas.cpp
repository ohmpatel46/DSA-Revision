#include<iostream>
using namespace std;

int sum_time(int rank,int p){
    int s=0;
    for(int i=1;i<=p;i++){
        s+=rank*i;
    }
    return s;
};
int sum_parathas(int rank, int t){
    int sum=0,p=0;
    for(int i=1;sum<t;i++){
        sum+=i*rank;
        if(sum>t)
            break;
        p++;
    }
    return p;
};

int main(){
    int p,c,r[100],s,e,mid,sum=0;
    cout<<"Enter the number of parathas and the number of chefs: ";
    cin>>p>>c;
    cout<<"Enter the ranks of the chefs: ";
    for(int i=0;i<c;i++){
            cin>>r[i];
    }
    s=0;
    e=sum_time(r[0],p);
    while(s<=e){
        sum=0;
        mid=(s+e)/2;
        for(int i=0;i<c;i++){
            sum+=sum_parathas(r[i],mid);
        }
        if(sum==p){
            break;
        }
        else if(sum>p){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    cout<<"The amount of time needed to make the parathas is: "<<mid;
}