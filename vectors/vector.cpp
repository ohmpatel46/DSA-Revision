// Vectors are arrays which can grow and shrink in size (dynamic array)
#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int> a;
    vector<int> b(5,10); // five integers with value 10
    vector<int> c(b.begin(),b.end()); // initializing a vector with another 
    vector<int> d{1,2,3,4,5,6}; // initializing with values

    // iterating over a vector
    //method1 
    for(int i=0;i<d.size();i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;
    //method2 
    for(auto it=d.begin();it!=d.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    //method3 - foreach loop
    for(int x:d){
        cout<<x<<" ";
    }
    cout<<endl;
    //push_back() - pushback doubles memory whenever more is needed
    vector<int> v;
    int n,y;
    cout<<"Enter number of values: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>y;
        v.push_back(y);
    }
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;

    // v.capacity() - size of the underlying data structure

    cout<<"Capacity of V is: "<<v.capacity()<<endl;
    cout<<"Capacity of D is: "<<d.capacity()<<endl;
}