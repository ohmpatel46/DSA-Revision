#include<iostream>
using namespace std;

bool can_paint(int time,int painters, int lengths[100],int boards){
    int painters_used=1,sum_time=0;
    for(int i=0;i<=boards;i++){
        if(sum_time+lengths[i]>time){
            painters_used++;
            cout<<"painters: "<<painters_used<<endl;
            sum_time=lengths[i];
            if(painters_used>painters){
                return false;
            }
        }
        else{
            sum_time+=lengths[i];
        }
    }
    return true;
}

int main(){
    int K,N,L[100]={0},s,e=0,mid;
    cout<<"Enter the number of painters and boards: ";
    cin>>K>>N;
    cout<<"Enter the lenghts of the boards: ";
    for(int i=0;i<N;i++){
        cin>>L[i];
        e+=L[i];
    }
    s=L[0];
    while(s<=e){
        mid=(s+e)/2;
        cout<<"mid: "<<mid<<endl;
        if(can_paint(mid,K,L,N))
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    cout<<"The minimum time in which the boards can be painted is: "<<mid;
}