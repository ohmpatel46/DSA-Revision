#include<iostream>
#include<list>
using namespace std;

void print(list<string> l){
    for(string s:l){
        cout<<s<<"->";
    }
    cout<<endl;
}

int main(){
    list<int> a;
    list<int> l{1,2,3,4,5};
    list<string> sl{"bruh","dayum","sheesh"};
    sl.push_back("xd");
    sl.sort();
    print(sl);
    
    sl.reverse(); 
    print(sl);
    sl.pop_front();
    sl.pop_back();
    print(sl);
    sl.push_front("habibi");
    sl.push_back("cat");
    print(sl);
    sl.remove("cat");
    auto it=sl.begin();
    it++;
    sl.erase(it); //cant perform addition with list iterator
    print(sl);
    it=sl.begin();
    sl.insert(it,"sheesh");
    print(sl);
}