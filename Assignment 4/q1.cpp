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
    int k;
    cin>>k;
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
    Node* x = temp->next;
    int k = 1;

    while(x){
    if(k%2==0){
        temp = temp->next;
        k++;
        continue;
    }
    for(int i=1;x && i<k;i++){
    x = temp->next;
    if(x)  temp->next = x->next;
    if(x)  x->next = temp;
    }  
    k++; 
    }

    temp = head;
    while(temp){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}