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

int main(){
    int n;
    cin>>n;
    Node* c = new Node(0);
    Node* temp = c;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        Node* x = new Node(a);
        temp->next = x;
        temp = temp->next;
    }
    Node* head = c->next;
    temp = head;
    while(temp){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    
}