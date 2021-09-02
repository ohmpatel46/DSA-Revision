#include<iostream>
using namespace std;

void fun1(int n){       //Tail recursion
    if(n>0){
        cout<<n<<endl;
        fun1(n-1); 
    }
}
void fun2(int n){       //Head recursion
    if(n>0){
        fun2(n-1);
        cout<<n<<endl;
    }
}
int main(){
    int x=3;
    fun1(x);
    cout<<endl;
    fun2(x);
}