#include<iostream>
using namespace std;
bool can_allocate(int p[1000],int min_pages, int students, int books){
    int studentused=1,pages_read=0;
    for(int i=0;i<books;i++){
        if(p[i]+pages_read>min_pages){
            studentused++;
            pages_read= p[i];
            if(studentused>students){
                return false;
            }
        }
        else{
            pages_read+=p[i];
        }
    }
    return true;
};
int main(){
    int books,students,pages[1000],s,e,mid,sum=0,ans=INT_MAX;
    cout<<"Enter the number of books and students: ";
    cin>>books>>students;
    cout<<"Enter the number of pages in each book: ";
    for(int i=0;i<books;i++){
        cin>>pages[i];
        sum+=pages[i];
    }
    s=pages[books-1];
    e=sum;
    while(s<=e){
        mid=(s+e)/2;
        if(can_allocate(pages,mid,students,books)){
            ans=min(mid,ans);
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    cout<<"The number of pages to be assigned to students is: "<<ans;
}