#include<iostream>
#include<list>
using namespace std;

template<class ForwardIterator>
ForwardIterator search(ForwardIterator start, ForwardIterator end,int key){
    while(start!=end){
        if(*start==key){
            return start;
        }
        start++;
    }
    return end;
};

int main(){
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    cout<<"Enter the element to be searched: ";
    int x;
    cin>>x;
    auto it=search(l.begin(),l.end(),x);
    cout<<*it;
}