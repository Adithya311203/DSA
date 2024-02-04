#include <bits/stdc++.h>

using namespace std;

class node{
    public: 
        int data;
        node* next;
        node(int val){
            data=val;
            next=NULL;
        }
};
void insertAtTail(node* &head, int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
 
    node* temp= head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;}


void insertInBetween(node* &head, int val,int key){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->data!=key){
        temp=temp->next;
    }
    
    n->next=temp->next;
    temp->next=n;
    
}


void insertAtHead(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    n->next=head;
    head=n;
}
bool search(node* head, int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

void display(node* head){
    node* temp=head;//int temp =0
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;//iterate
    }
    cout<<"NULL"<<endl;
}


int main()
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,4);
    insertAtTail(head,5);
    //insertAtHead(head,0);
    //insertInBetween(head,6,5);
    //insertInBetween(head,2,1);
    display(head);
    //cout<< search(head, 2);
    return 0;
}