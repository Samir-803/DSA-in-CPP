#include<bits/stdc++.h>
using namespace std;
class Node{
public :
    int val;
    Node* next;
 
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertAtEnd(Node* head,int x){
    Node* temp = head;
    Node* tail = new Node(x);
    while(temp->next!=NULL) temp = temp->next;
    temp->next = tail;
}

int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    a->next = b;
    b->next = c;
    c->next = d;

    int x;
    cout<<"Enter the Value you Want to Insert At End : ";
    cin>>x;

    insertAtEnd(a,x);

    display(a);
}