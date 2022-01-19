#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> v){
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v{1,2,3,4};
    display(v);
    v.push_back(5);
    display(v);
    v.pop_back();
    display(v);
    v.insert(v.begin()+2,10); // insert single element at index 2
    display(v);
    v.insert(v.begin()+3,3,100); // insert an element 3 times
    display(v); 
    v.erase(v.begin()+2); // remove single element
    display(v);
    v.erase(v.begin()+2,v.begin()+5); // removing 3 elements
    display(v);

    // size and capacity
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;

    //resize only works if u want to expand the size and capacity, does not shrink the capacity
    v.resize(7);
    cout<<"Capacity: "<<v.capacity()<<endl;
    v.resize(14);
    cout<<"Capacity: "<<v.capacity()<<endl;

    //remove all the elements of the vector(does not deallocate the memory i.e capacity is uncahnged)
    v.clear();
    if(v.empty()){
        cout<<"V is an empty vector"<<endl;
    }

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    // printing first and last elements 
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;

    //reserve memory (expands only if needed more than reserved)
    v.reserve(500);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    cout<<v.capacity();
}