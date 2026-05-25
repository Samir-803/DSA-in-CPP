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

Node* insertAtIdx(Node* head,int x,int idx){
    Node* temp = head;
    Node* t = new Node(x);
    if(idx==0){
        t->next = temp;
        head = t;
        return head;
    }
    for(int i=1;i<=idx-1;i++) temp = temp->next;
    t->next = temp->next;
    temp->next = t;
    return head;
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
    cout<<"Enter the Value you Want to Insert At Any idx : ";
    cin>>x;

    int idx;
    cout<<"Enter Which idx you Want to add Number : ";
    cin>>idx;

    a = insertAtIdx(a,x,idx);

    display(a);
}