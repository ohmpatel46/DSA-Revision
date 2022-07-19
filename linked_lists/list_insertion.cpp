#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int d){
        data=d;
        next=NULL;
    }
};

int length(node* head){
    int cnt=0;
    while(head!=NULL){
        head=head->next;
        cnt++; 
    }
    return cnt; 
} 

void insertAtHead(node* &head, int d){ //passed by reference
    if(head==NULL){
        head=new node(d);
    }
    else{
        node* n= new node(d);
        n->next=head;
        head=n; 
    }
}

void insertAtTail(node* &head, int d){ //passed by reference
    if(head==NULL){
        head=new node(d);
        return;
    } 
    node* tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    node* temp= new node(d);
    tail->next= temp;
}

void insertMiddle(node* &head,int d, int n){ // passed by reference
    if(head==NULL || n==0){
        insertAtHead(head,d);
        return;
    }
    else if(n>length(head)){
        insertAtTail(head,d);
        return;
    }
    node* x=head;
    for(int i=0;i<n-1;i++){
        x=x->next;
    }
    
    node* temp=new node(d);
    temp->next=x->next;
    x->next=temp;

}

void deleteAtIndex(node* head, int n){ //not passed by reference
    node* prev=head;
    for(int i=0;i<n-1;i++){
        prev=prev->next;
    }
    for(int i=0;i<n;i++){
        head=head->next;
    }
    node* temp= head->next;
    delete head;
    head=temp;
    prev->next=head;
}

void searchData(node* head, int d){ // not passed by reference
    int i=0;
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==d){
            cout<<"\nFound at index "<<i;
            return;
        }
        temp=temp->next;
        i++;
    }
    cout<<"\nElement not in list.";
}
void printLinkedList(node* head){ //not passed by reference
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
}

int main(){
    node* head=NULL;
    insertAtHead(head,5);
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertMiddle(head,4,3);
    insertAtTail(head,6);
    printLinkedList(head);
    searchData(head,3);
}