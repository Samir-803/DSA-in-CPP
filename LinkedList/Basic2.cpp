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
    // Time Coplexity = O(n)
    // Space Complexity = O(1)
}

void displayrec(Node* head){
    Node* temp = head;
    if(temp==NULL) return; // base case
    cout<<temp->val<<" ";  // kaam
    displayrec(temp->next); // call
    // Iterative Sol is Better than Recursive sol
    // Time Coplexity = O(n)
    // Space Complexity = O(n)
}

int size(Node* head){
    Node* temp = head;
    int n = 0;
    while(temp!=NULL){
        n++;
        temp = temp->next;
    }
    return n;
}

int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    a->next = b;
    b->next = c;
    c->next = d;

    cout<<a->val<<" ";
    cout<<a->next->val<<" ";
    cout<<a->next->next->val<<" ";
    cout<<a->next->next->next->val<<endl;

    display(a);
    int n = size(a);
    cout<<n<<endl;

    //By Recursion
    displayrec(a);
}