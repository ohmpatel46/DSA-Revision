#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of strings: ";
    cin>>n;
    cin.get(); // to consume the null character so it doesnt get counted in the aray of striings
    char largeststr[100]="",currentstr[100];
    for(int i=0;i<n;i++){
        cin.getline(currentstr,100);
        if(strlen(currentstr)>strlen(largeststr)){
            strcpy(largeststr,currentstr);
        }
    }
    cout<<endl<<largeststr;
}