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

void displayrec(Node* head){
    Node* temp = head;
    if(temp==NULL) return; // base case
    cout<<temp->val<<" ";  // kaam
    displayrec(temp->next); // call
}

void Reverse(Node* head){
    if(head==NULL) return; // base case

    Reverse(head->next); // call
    cout<<head->val<<" ";  // kaam
}

int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    a->next = b;
    b->next = c;
    c->next = d;

   // By Recursion
    displayrec(a);
    cout<<endl;
    Reverse(a);
}